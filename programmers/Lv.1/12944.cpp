//
// Created by habi on 2023-08-09.
// Lv.1: 평균 구하기
// https://programmers.co.kr/learn/courses/30/lessons/12944
//

#include <string>
#include <vector>
using namespace std;

double solution(vector<int> arr) {
  double answer = 0;

  for (int i = 0; i < arr.size(); i++) {
    answer += arr[i];
  }
  answer /= arr.size();

  return answer;
}
