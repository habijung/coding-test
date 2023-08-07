//
// Created by habi on 2023-08-07.
// Lv.1: 같은 숫자는 싫어
// https://programmers.co.kr/learn/courses/30/lessons/12906
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
  vector<int> answer;

  arr.erase(unique(arr.begin(), arr.end()), arr.end());

  answer = arr;

  return answer;
}
