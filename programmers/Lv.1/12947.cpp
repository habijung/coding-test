//
// Created by habi on 2023-08-09.
// Lv.1: 하샤드 수
// https://programmers.co.kr/learn/courses/30/lessons/12947
//

#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
  bool answer = true;
  int t = x;
  int count = 0;

  while (t >= 10) {
    count += t % 10;
    t /= 10;
  }
  count += t;

  answer = x % count == 0 ? true : false;

  return answer;
}
