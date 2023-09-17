//
// Created by habi on 2023-09-18.
// Lv.2: 더 맵게
// https://school.programmers.co.kr/learn/courses/30/lessons/42626
//

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++) {
        pq.push(scoville[i]);
    }

    if (pq.top() >= K) {
        return 0;
    }

    while (pq.size() >= 2) {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        int score = a + b * 2;
        pq.push(score);

        answer++;

        if (pq.top() >= K) {
            return answer;
        }
    }

    return -1;
}
