//
// Created by habi on 2023-08-09.
// Lv.1: 콜라츠 추측
// https://programmers.co.kr/learn/courses/30/lessons/12943
//

#include <string>
#include <vector>
using namespace std;

int solution(int num) {
  int answer = 0;
  long numl = num;

  while (answer < 500) {
    if (numl == 1) {
      break;
    }

    if (numl % 2 == 0) {
      numl /= 2;
    } else {
      numl = numl * 3 + 1;
    }

    answer += 1;
  }

  answer = answer == 500 ? -1 : answer;

  return answer;
}
