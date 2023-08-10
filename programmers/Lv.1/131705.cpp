//
// Created by habi on 2023-08-10.
// Lv.1: 삼총사
// https://programmers.co.kr/learn/courses/30/lessons/131705
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> number) {
  int answer = 0;
  int N = number.size();

  for (int i = 0; i < N - 2; i++) {
    for (int j = i + 1; j < N - 1; j++) {
      for (int k = j + 1; k < N; k++) {
        if (number[i] + number[j] + number[k] == 0) {
          answer += 1;
        }
      }
    }
  }

  return answer;
}
