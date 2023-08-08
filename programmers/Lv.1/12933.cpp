//
// Created by habi on 2023-08-08.
// Lv.1: 정수 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12933
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
  long long answer = 0;

  string tmp = to_string(n);
  sort(tmp.rbegin(), tmp.rend());

  answer = stoll(tmp);

  return answer;
}
