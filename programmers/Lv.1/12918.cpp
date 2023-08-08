//
// Created by habi on 2023-08-08.
// Lv.1: 문자열 다루기 기본
// https://programmers.co.kr/learn/courses/30/lessons/12918
//

#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
  bool answer = true;
  int N = s.length();

  if (N != 4 && N != 6) {
    return false;
  }

  for (int i = 0; i < N; i++) {
    if (s[i] < '0' || s[i] > '9') {
      return false;
    }
  }

  return answer;
}
