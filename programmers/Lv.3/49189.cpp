//
// Created by habi on 9/15/2023.
// Lv.3: 가장 먼 노드
// https://school.programmers.co.kr/learn/courses/30/lessons/49189
//

#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    int max = 0;
    map<int, vector<int>> graph;
    map<int, int> distance;

    // 그래프 만들고 거리 초기화
    // 모든 노드를 map에 추가하기 위해 index 0, 1 모두 저장
    for (auto e: edge) {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
        distance[e[0]] = -1;
        distance[e[1]] = -1;
    }

    queue<int> nodes;
    nodes.push(1);
    distance[1] = 0;

    // BFS로 현재 노드에 연결된 모든 노드 확인
    while (!nodes.empty()) {
        int curr = nodes.front();
        nodes.pop();

        for (int i = 0; i < graph[curr].size(); i++) {
            int next = graph[curr][i];

            if (distance[next] == -1) {
                nodes.push(next);
                distance[next] = distance[curr] + 1;
            }
        }
    }

    for (auto d: distance) {
        if (max < d.second) {
            max = d.second;
        }
    }

    for (auto d: distance) {
        if (max == d.second) {
            answer += 1;
        }
    }

    return answer;
}
