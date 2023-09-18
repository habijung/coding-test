//
// Created by habi on 2023-09-18.
// Lv.3: 디스크 컨트롤러
// https://school.programmers.co.kr/learn/courses/30/lessons/42627
//

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef vector<int> vec;

struct cmp {
    bool operator()(const vec &a, vec &b) {
        return a.at(1) >= b.at(1);
    }
};

int solution(vector <vector<int>> jobs) {
    int answer = 0;
    int now = 0;
    int idx = 0;
    int total = 0;
    priority_queue <vec, vector<vec>, cmp> pq;

    sort(jobs.begin(), jobs.end());

    while (idx < jobs.size() || !pq.empty()) {
        if (idx < jobs.size() && jobs[idx][0] <= now) {
            pq.push(jobs[idx]);
            idx += 1;
            continue;
        }

        if (pq.empty()) {
            now = jobs[idx][0];
        } else {
            int twork = pq.top()[1];
            int twait = pq.top()[0];
            pq.pop();

            now += twork;
            total += now - twait;
        }
    }

    answer = total / jobs.size();
    return answer;
}
