//
// Created by habi on 2023-09-10.
// Lv.2: 타겟 넘버
// https://school.programmers.co.kr/learn/courses/30/lessons/43165
//

#include <string>
#include <vector>
using namespace std;

// DFS
int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int n) {
    if (n >= numbers.size()) {
        if (sum == target) {
            answer++;
        }

        return;
    }

    DFS(numbers, target, sum + numbers[n], n + 1);
    DFS(numbers, target, sum - numbers[n], n + 1);
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, numbers[0], 1);
    DFS(numbers, target, -numbers[0], 1);

    return answer;
}
