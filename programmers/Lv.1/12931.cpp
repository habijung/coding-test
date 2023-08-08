//
// Created by habi on 2023-08-08.
// Lv.1: 자릿수 더하기
// https://programmers.co.kr/learn/courses/30/lessons/12931
//

#include <iostream>
using namespace std;

int solution(int n) {
  int answer = 0;

  while (n >= 10) {
    answer += n % 10;
    n = n / 10;
  }

  answer += n;

  return answer;
}
