//
// Created by habi on 2023-08-07.
// Lv.1: 가운데 글자 가져오기
// https://programmers.co.kr/learn/courses/30/lessons/12903
//

#include <string>
#include <vector>
using namespace std;

string solution(string s) {
  string answer = "";
  int N = s.length();

  answer = (N % 2) == 0 ? s.substr(N / 2 - 1, 2) : s.substr(N / 2, 1);

  return answer;
}
