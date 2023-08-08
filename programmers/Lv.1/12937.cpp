//
// Created by habi on 2023-08-09.
// Lv.1: 짝수와 홀수
// https://programmers.co.kr/learn/courses/30/lessons/12937
//

#include <string>
#include <vector>
using namespace std;

string solution(int num) {
  string answer = "";

  answer = num % 2 == 0 ? "Even" : "Odd";

  return answer;
}
