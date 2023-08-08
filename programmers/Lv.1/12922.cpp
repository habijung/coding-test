//
// Created by habi on 2023-08-08.
// Lv.1: 수박수박수박수박수박수?
// https://programmers.co.kr/learn/courses/30/lessons/12922
//

#include <string>
#include <vector>
using namespace std;

string solution(int n) {
  string answer = "";

  for (int i = 1; i <= n; i++) {
    answer += i % 2 == 1 ? "수" : "박";
  }

  return answer;
}
