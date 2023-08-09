//
// Created by habi on 2023-08-09.
// Lv.1: 핸드폰 번호 가리기
// https://programmers.co.kr/learn/courses/30/lessons/12948
//

#include <string>
#include <vector>
using namespace std;

string solution(string phone_number) {
  string answer = "";
  int N = phone_number.length();

  for (int i = 0; i < N; i++) {
    answer += N - i <= 4 ? phone_number[i] : '*';
  }

  return answer;
}
