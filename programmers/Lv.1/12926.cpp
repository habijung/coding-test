//
// Created by habi on 2023-08-08.
// Lv.1: 시저 암호
// https://programmers.co.kr/learn/courses/30/lessons/12926
//

#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
  string answer = "";

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
      if (s[i] <= 'Z' && s[i] + n > 'Z') {
        answer += (s[i] + n - 26);
      } else if (s[i] <= 'z' && s[i] + n > 'z') {
        answer += (s[i] + n - 26);
      } else {
        answer += s[i] + n;
      }
    } else {
      answer += ' ';
    }
  }

  return answer;
}
