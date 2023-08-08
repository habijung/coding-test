//
// Created by habi on 2023-08-08.
// Lv.1: 정수 제곱근 판별
// https://programmers.co.kr/learn/courses/30/lessons/12934
//

#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
  long long answer = 0;

  long long tmp = sqrt(n);

  answer = pow(tmp, 2) == n ? pow(tmp + 1, 2) : -1;

  return answer;
}
