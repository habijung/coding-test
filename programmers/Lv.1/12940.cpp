//
// Created by habi on 2023-08-09.
// Lv.1: 최대공약수와 최소공배수
// https://programmers.co.kr/learn/courses/30/lessons/12940
//

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
  vector<int> answer;

  int a = n <= m ? n : m;
  int b = n > m ? n : m;

  int GCD = 1; // 최대공약수 (Greatest Common Divisor)
  int LCM = 1; // 최소공배수 (Least Common Multiple)

  for (int i = n; i > 0; i--) {
    if (n % i == 0 && m % i == 0) {
      GCD = i;
      break;
    }
  }

  LCM = a * b / GCD;

  answer.push_back(GCD);
  answer.push_back(LCM);

  return answer;
}
