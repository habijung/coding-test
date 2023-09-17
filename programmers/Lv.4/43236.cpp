//
// Created by habi on 2023-09-18.
// Lv.4: 징검다리
// https://school.programmers.co.kr/learn/courses/30/lessons/43236
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    int low = 0;
    int high = distance;

    sort(rocks.begin(), rocks.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int cnt = 0;
        int pos = 0;

        for (int i = 0; i < rocks.size(); i++) {
            if ((rocks[i] - pos) < mid) {
                cnt += 1;
            } else {
                pos = rocks[i];
            }
        }

        // 도착지점과 현재 바위와도 확인 필요
        if ((distance - pos) < mid) {
            cnt += 1;
        }

        if (cnt > n) {
            high = mid - 1;
        } else {
            answer = mid;
            low = mid + 1;
        }
    }

    return answer;
}
