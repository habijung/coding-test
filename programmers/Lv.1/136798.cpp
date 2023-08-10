//
// Created by habi on 2023-08-10.
// Lv.1: 기사단원의 무기
// https://programmers.co.kr/learn/courses/30/lessons/136798
//

#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
  int answer = 0;

  // 1번 기사
  answer += 1;

  // 나머지 기사
  for (int i = 2; i <= number; i++) {
    int count = 2;

    // 임의의 수 n / 2까지만 약수가 될 수 있음.
    for (int j = 2; j <= (i / 2); j++) {
      if (i % j == 0) {
        count += 1;
      }
    }

    count = count > limit ? power : count;
    answer += count;
  }

  return answer;
}
