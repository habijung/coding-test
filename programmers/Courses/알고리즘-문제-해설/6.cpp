//
// Created by habi on 2023-08-03.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1881
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> sticker) {
  int answer = 0;
  int N = sticker.size();

  // N = 1 스티커를 사용할 때와 아닐 때를 구분함
  vector<int> sum1(N), sum2(N);

  sum1[0] = sticker[0];
  sum2[0] = 0;

  // N > 1 일 때 초기값 설정
  if (N > 1) {
    sum1[1] = sticker[0];
    sum2[1] = sticker[1];
  }

  for (int i = 0; i < N; i++) {
    if (i > 1) {
      sum1[i] = max(sum1[i - 2] + sticker[i], sum1[i - 1]);
      sum2[i] = max(sum2[i - 2] + sticker[i], sum2[i - 1]);
    }
  }

  if (N > 1) {
    answer = max(sum1[N - 2], sum2[N - 1]);
  } else {
    answer = max(sum1[0], sum2[0]);
  }

  return answer;
}
