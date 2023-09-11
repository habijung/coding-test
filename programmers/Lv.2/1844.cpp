//
// Created by habi on 2023-09-10.
// Lv.2: 게임 맵 최단거리
// https://school.programmers.co.kr/learn/courses/30/lessons/1844
//

#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int solution(vector<vector<int>> maps) {
    int answer = 0;
    int n = maps[0].size();
    int m = maps.size();
    typedef pair<pair<int, int>, int> curr;// {{x, y}, count}
    queue<curr> q;

    // 방향: 상하좌우
    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {-1, 1, 0, 0};

    q.push({{0, 0}, 1});

    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        answer = q.front().second;
        q.pop();
        // printf("x: %d, y: %d, answer: %d\n", x + 1, y + 1, answer);

        if ((x == n - 1) && (y == m - 1)) {
            return answer;
        }

        for (int i = 0; i < 4; i++) {
            int xpos = x + dx[i];
            int ypos = y + dy[i];

            if (xpos < 0 || ypos < 0 || xpos == n || ypos == m) {
                continue;
            }

            if (maps[ypos][xpos] == 0) {
                continue;
            }

            // maps에서 지나간 곳을 0으로 만들어서 다시 지나가지 않게 설정
            maps[ypos][xpos] = 0;

            q.push({{xpos, ypos}, answer + 1});
        }
    }

    return -1;
}
