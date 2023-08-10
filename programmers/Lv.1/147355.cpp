//
// Created by habi on 2023-08-10.
// Lv.1: 크기가 작은 부분 문자열
// https://programmers.co.kr/learn/courses/30/lessons/147355
//

#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
  int answer = 0;

  for (int i = 0; i < t.length() - p.length() + 1; i++) {
    string s = t.substr(i, p.length());

    if (stoll(s) <= stoll(p)) {
      answer += 1;
    }
  }

  return answer;
}
