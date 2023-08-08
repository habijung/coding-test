//
// Created by habi on 2023-08-08.
// Lv.1: 이상한 문자 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12930
//

#include <string>
#include <vector>
using namespace std;

string solution(string s) {
  string answer = "";
  int idx = 0;
  int interval = 'a' - 'A';

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      idx = -1;
    }

    if (idx >= 0) {
      if (idx % 2 == 0 && (s[i] >= 'a' && s[i] <= 'z')) {
        s[i] -= interval;
      } else if (idx % 2 == 1 && (s[i] >= 'A' && s[i] <= 'Z')) {
        s[i] += interval;
      }
    }

    idx += 1;
  }

  answer = s;

  return answer;
}
