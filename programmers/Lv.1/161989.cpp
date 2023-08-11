//
// Created by habi on 2023-08-11.
// Lv.1: 덧칠하기
// https://programmers.co.kr/learn/courses/30/lessons/161989
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
  int answer = 0;

  while (section.size() > 0) {
    int N = section.size();
    vector<int> tmp = section;

    for (int i = N - 1; i >= 0; i--) {
      if (section[i] >= section[N - 1] - m + 1) {
        tmp.pop_back();
      }
    }

    section = tmp;
    answer += 1;
  }

  return answer;
}
