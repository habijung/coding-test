//
// Created by habi on 2023-08-01.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1878
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int>> v) {
  vector<int> ans = {0, 0};

  /*
   * 중요한 개념
   * (A XOR A) XOR B = B
   * (A XOR B) XOR B = A
   */
  for (int i = 0; i < 3; i++) {
    ans[0] ^= v[i][0];
    ans[1] ^= v[i][1];
  }

  return ans;
}
