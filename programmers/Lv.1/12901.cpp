//
// Created by habi on 2023-08-07.
// Lv.1: 2016년
// https://programmers.co.kr/learn/courses/30/lessons/12901
//

#include <string>
#include <vector>
using namespace std;

string solution(int a, int b) {
  string answer = "";

  int sum = 4;
  int month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

  for (int i = 1; i < a; i++) {
    sum += month[i];
  }

  sum += b;

  answer = days[sum % 7];

  return answer;
}
