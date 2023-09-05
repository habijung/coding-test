//
// Created by habi on 2023-09-05.
// Lv.2: 프로세스
// https://school.programmers.co.kr/learn/courses/30/lessons/42587
//

#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < priorities.size(); i++) {
        q.push(make_pair(i, priorities[i]));
    }

    sort(priorities.begin(), priorities.end());

    while (!q.empty()) {
        pair<int, int> f = q.front();
        int max = priorities[priorities.size() - 1];

        if (f.second < max) {
            q.pop();
            q.push(f);
        } else {
            answer++;

            if (f.first == location) {
                break;
            }

            priorities.pop_back();
            q.pop();
        }
    }

    return answer;
}
