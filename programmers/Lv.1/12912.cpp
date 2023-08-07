//
// Created by habi on 2023-08-07.
// Lv.1: 두 정수 사이의 합
// https://programmers.co.kr/learn/courses/30/lessons/12912
//

#include <string>
#include <vector>
using namespace std;

long long solution(int a, int b) {
  long long answer = 0;

  if (a == b) {
    return a;
  }

  int x = a < b ? a : b;
  int y = a < b ? b : a;
  long long sum = 0;

  for (int i = x; i <= y; i++) {
    sum += i;
  }

  answer = sum;

  return answer;
}
