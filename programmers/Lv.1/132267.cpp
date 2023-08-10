//
// Created by habi on 2023-08-10.
// Lv.1: 콜라 문제
// https://programmers.co.kr/learn/courses/30/lessons/132267
//

#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
  int answer = 0;

  while (n >= a) {
    answer += (n / a * b);
    n = (n / a * b) + (n % a);
  }

  return answer;
}
