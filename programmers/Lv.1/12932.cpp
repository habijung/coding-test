//
// Created by habi on 2023-08-08.
// Lv.1: 자연수 뒤집어 배열로 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12932
//

#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
  vector<int> answer;

  while (n >= 10) {
    answer.push_back(n % 10);
    n = n / 10;
  }

  answer.push_back(n);

  return answer;
}
