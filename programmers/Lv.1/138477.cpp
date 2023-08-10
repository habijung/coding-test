//
// Created by habi on 2023-08-10.
// Lv.1: 명예의 전당 (1)
// https://programmers.co.kr/learn/courses/30/lessons/138477
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(int k, vector<int> score) {
  vector<int> answer;
  vector<int> tmp;

  for (int i = 0; i < score.size(); i++) {
    tmp.push_back(score[i]);
    sort(tmp.rbegin(), tmp.rend());

    if (tmp.size() > k) {
      tmp.pop_back();
    }

    answer.push_back(tmp[tmp.size() - 1]);
  }

  return answer;
}
