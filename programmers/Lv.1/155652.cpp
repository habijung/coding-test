//
// Created by habi on 2023-08-10.
// Lv.1: 둘만의 암호
// https://programmers.co.kr/learn/courses/30/lessons/155652
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string s, string skip, int index) {
  string answer = "";

  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j < index; j++) {
      s[i] += 1;
      s[i] = s[i] > 'z' ? s[i] - 26 : s[i];

      while (skip.find(s[i]) != string::npos) {
        s[i] += 1;
        s[i] = s[i] > 'z' ? s[i] - 26 : s[i];
      }
    }
  }

  answer = s;

  return answer;
}
