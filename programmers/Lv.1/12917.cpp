//
// Created by habi on 2023-08-08.
// Lv.1: 문자열 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12917
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string solution(string s) {
  string answer = "";

  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());

  answer = s;

  return answer;
}
