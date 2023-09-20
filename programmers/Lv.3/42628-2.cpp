//
// Created by habi on 2023-09-20.
// Lv.3: 이중우선순위큐
// https://school.programmers.co.kr/learn/courses/30/lessons/42628
//

#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> solution(vector <string> operations) {
    vector<int> answer;
    deque<int> dq;

    for (int i = 0; i < operations.size(); i++) {
        string op = operations[i].substr(0, 1);
        int num = stoi(operations[i].substr(2));

        if (op == "I") {
            dq.push_back(num);
            sort(dq.rbegin(), dq.rend());
        }

        if (op == "D" && !dq.empty()) {
            if (num == 1) {
                dq.pop_front();
            } else {
                dq.pop_back();
            }
        }
    }

    if (!dq.empty()) {
        answer.push_back(dq.front());
        answer.push_back(dq.back());
    } else {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}
