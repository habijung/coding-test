//
// Created by habi on 2023-08-01.
//

// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1876

#include <iostream>
using namespace std;

int solution(int n) {
  int answer = 0;

  while (n != 0) {
    answer += n % 10;
    n = n / 10;
  }

  return answer;
}
