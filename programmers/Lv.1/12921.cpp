//
// Created by habi on 2023-08-08.
// Lv.1: 소수 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12921
//

#include <cmath>
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
  int answer = 0;
  vector<int> nums;

  nums.push_back(2);

  // 에라토스테네스의 체 방법을 사용해야 효율성 통과 가능
  for (int i = 3; i <= n; i++) {
    int sq = (int)sqrt(i);
    bool prime = true;

    for (int j = 0; j < sq; j++) {
      if (i % nums[j] == 0) {
        prime = false;
        break;
      }
    }

    if (prime) {
      nums.push_back(i);
    }
  }

  answer = nums.size();

  return answer;
}
