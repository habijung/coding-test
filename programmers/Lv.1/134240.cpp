//
// Created by habi on 2023-08-10.
// Lv.1: 푸드 파이트 대회
// https://programmers.co.kr/learn/courses/30/lessons/134240
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(vector<int> food) {
  string answer = "";

  for (int i = 1; i < food.size(); i++) {
    for (int j = 0; j < food[i] / 2; j++) {
      answer += to_string(i);
    }
  }

  string copy = answer;
  reverse(copy.begin(), copy.end());

  answer = answer + "0" + copy;

  return answer;
}
