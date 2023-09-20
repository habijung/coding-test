//
// Created by habi on 2023-09-20.
// Lv.3: 이중우선순위큐
// https://school.programmers.co.kr/learn/courses/30/lessons/42628
//

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector <string> operations) {
    vector<int> answer;
    priority_queue<int, vector<int>, less<int>> pq;

    for (int i = 0; i < operations.size(); i++) {
        string op = operations[i].substr(0, 1);
        int num = stoi(operations[i].substr(2));

        if (op == "I") {
            pq.push(num);
        }

        if (op == "D" && !pq.empty()) {
            if (num == 1) {
                pq.pop();
            } else {
                int pq_size = pq.size();
                queue<int> q;

                for (int i = 0; i < pq_size - 1; i++) {
                    q.push(pq.top());
                    pq.pop();
                }

                pq.pop();
                int q_size = q.size();

                for (int i = 0; i < q_size; i++) {
                    pq.push(q.front());
                    q.pop();
                }
            }
        }
    }

    if (!pq.empty()) {
        if (pq.size() == 1) {
            answer.push_back(pq.top());
            answer.push_back(pq.top());
        } else {
            int pq_size = pq.size();
            for (int i = 0; i < pq_size; i++) {
                if (i == 0 || i == pq_size - 1) {
                    answer.push_back(pq.top());
                }
                pq.pop();
            }
        }
    } else {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}
