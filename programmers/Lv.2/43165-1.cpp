//
// Created by habi on 2023-09-10.
// Lv.2: 타겟 넘버
// https://school.programmers.co.kr/learn/courses/30/lessons/43165
//

#include <string>
#include <vector>
using namespace std;

// BFS
int solution(vector<int> numbers, int target) {
    int answer = 0;
    vector<int> leaves;
    leaves.push_back(0);

    for (int i = 0; i < numbers.size(); i++) {
        vector<int> tmp;

        for (int j = 0; j < leaves.size(); j++) {
            tmp.push_back(leaves[j] + numbers[i]);
            tmp.push_back(leaves[j] - numbers[i]);
        }

        leaves = tmp;
    }

    for (int i = 0; i < leaves.size(); i++) {
        if (leaves[i] == target) {
            answer++;
        }
    }

    return answer;
}
