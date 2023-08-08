//
// Created by habi on 2023-08-08.
// Lv.1: 약수의 합
// https://programmers.co.kr/learn/courses/30/lessons/12928
//

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
  int answer = 0;

  for (int i = 1; i <= n; i++) {
    answer += n % i == 0 ? i : 0;
  }

  return answer;
}
