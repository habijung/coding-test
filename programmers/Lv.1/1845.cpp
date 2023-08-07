//
// Created by habi on 2023-08-07.
// Lv.1: 폰켓몬
// https://programmers.co.kr/learn/courses/30/lessons/1845
//

#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> nums) {
  int answer = 0;
  int N = nums.size();

  // 중복을 제거한 vector의 사이즈를 (N / 2)와 비교함
  sort(nums.begin(), nums.end());
  nums.erase(unique(nums.begin(), nums.end()), nums.end());

  answer = min((int)nums.size(), N / 2);

  return answer;
}
