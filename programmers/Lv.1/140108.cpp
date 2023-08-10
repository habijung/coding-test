//
// Created by habi on 2023-08-10.
// Lv.1: 문자열 나누기
// https://programmers.co.kr/learn/courses/30/lessons/140108
//

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
  int answer = 1;

  char c = s[0];
  int x = 1;
  int y = 0;

  for (int i = 1; i < s.length(); i++) {
    if (c == s[i]) {
      x += 1;
    } else {
      y += 1;
    }

    if (x == y && i < s.length() - 1) {
      answer += 1;
      c = s[i + 1];
    }
  }

  return answer;
}
