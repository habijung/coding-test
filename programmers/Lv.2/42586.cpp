//
// Created by habi on 2023-09-05.
// Lv.2: 기능개발
// https://school.programmers.co.kr/learn/courses/30/lessons/42586
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;

    // 1. 각 작업별로 며칠 걸리는지 계산
    for (int i = 0; i < progresses.size(); i++) {
        days.push_back((99 - progresses[i]) / speeds[i] + 1);
    }

    int count = 0;
    int num = days[0];
    vector<int>::iterator iter = days.begin();

    // 2. days 예시 2: [5, 10, 1, 1, 20, 1]
    while (iter != days.end()) {
        // 3. 현재 일수가 비교 일수보다 작거나 같으면 카운트 올리기
        if (*iter <= num) {
            count++;
        } else {
            if (count != 0) {
                answer.push_back(count);
            }
            count = 1;
            num = *iter;
        }

        iter++;

        // 4. 마지막에 걸리는 배포 계산
        if (iter == days.end()) {
            answer.push_back(count);
        }
    }

    return answer;
}
