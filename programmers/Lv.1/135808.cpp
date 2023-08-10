//
// Created by habi on 2023-08-10.
// Lv.1: 과일 장수
// https://programmers.co.kr/learn/courses/30/lessons/135808
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solution(int k, int m, vector<int> score) {
  int answer = 0;

  sort(score.rbegin(), score.rend());

  for (int i = 0; i < score.size(); i++) {
    if (i % m == (m - 1)) {
      answer += score[i] * m;
    }
  }

  return answer;
}
