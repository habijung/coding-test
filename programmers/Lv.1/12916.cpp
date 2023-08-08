//
// Created by habi on 2023-08-07.
// Lv.1: 문자열 내 p와 y의 개수
// https://programmers.co.kr/learn/courses/30/lessons/12916
//

#include <iostream>
#include <string>
using namespace std;

bool solution(string s) {
  bool answer = true;
  int x = 0;
  int y = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'p' || s[i] == 'P') {
      x += 1;
    }
    if (s[i] == 'y' || s[i] == 'Y') {
      y += 1;
    }
  }

  answer = x == y ? true : false;

  return answer;
}
