//
// Created by habi on 2023-08-07.
// Lv.1: 나누어 떨어지는 숫자 배열
// https://programmers.co.kr/learn/courses/30/lessons/12910
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
  vector<int> answer;
  vector<int>::iterator iter;

  for (iter = arr.begin(); iter != arr.end(); iter++) {
    if (*iter % divisor == 0) {
      answer.push_back(*iter);
    }
  }

  if (answer.size() == 0) {
    answer.push_back(-1);
  } else {
    sort(answer.begin(), answer.end());
  }

  return answer;
}
