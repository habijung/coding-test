//
// Created by habi on 2023-09-18.
// Lv.3: 입국심사
// https://school.programmers.co.kr/learn/courses/30/lessons/43238
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long low, high = 0;

    sort(times.begin(), times.end());
    low = times[0];
    high = (long long) times[times.size() - 1] * n;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long finish = 0;

        for (int i = 0; i < times.size(); i++) {
            finish += mid / times[i];

            if (finish >= n) {
                break;
            }
        }

        if (finish >= n) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}
