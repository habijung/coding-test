//
// Created by habi on 2023-08-01.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1877
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> arr) {
  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++) {
    if ((i + 1) != arr[i]) {
      return false;
    }
  }

  return true;
}
