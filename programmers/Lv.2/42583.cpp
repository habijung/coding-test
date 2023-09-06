//
// Created by habi on 2023-09-06.
// Lv.2: 다리를 지나는 트럭
// https://school.programmers.co.kr/learn/courses/30/lessons/42583
//

#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 1;
    int sum = 0;
    int end = 0;
    stack<int> trucks;
    queue<pair<int, int>> bridge;

    for (int i = truck_weights.size(); i > 0; i--) {
        trucks.push(truck_weights[i - 1]);
    }

    while (!trucks.empty() || !bridge.empty()) {
        if (!trucks.empty()) {
            int truck = trucks.top();

            // 다음 트럭을 보낼 수 있는지 확인
            if (sum < weight && bridge.size() < bridge_length) {
                sum += truck;

                if (sum > weight) {
                    sum -= truck;
                } else {
                    pair<int, int> p = {truck, 1};
                    bridge.push(p);
                    trucks.pop();
                }
            }
        }

        // 다리 위에서 트럭 한칸 이동
        if (!bridge.empty()) {
            pair<int, int> p;

            for (int i = 0; i < bridge.size(); i++) {
                p = bridge.front();
                p.second++;
                bridge.push(p);
                bridge.pop();
            }

            // 맨 앞 트럭이 다리를 건넜는지 확인
            p = bridge.front();
            if (p.second > bridge_length) {
                sum -= p.first;
                bridge.pop();
            }
        }

        answer++;
    }

    return answer;
}