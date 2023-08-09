//
// Created by habi on 2023-08-09.
// Lv.1: 숫자 짝궁
// https://programmers.co.kr/learn/courses/30/lessons/131128
//

#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;

string solution(string X, string Y) {
  string answer = "";

  map<string, int> mx;
  map<string, int> my;

  for (int i = 0; i <= 9; i++) {
    string s = to_string(i);
    mx.insert({s, 0});
    my.insert({s, 0});
  }

  for (int i = 0; i < X.length(); i++) {
    string s(1, X[i]);
    mx[s] += 1;
  }

  for (int i = 0; i < Y.length(); i++) {
    string s(1, Y[i]);
    my[s] += 1;
  }

  for (int i = 0; i <= 9; i++) {
    string s = to_string(i);

    if (mx[s] != 0 && my[s] != 0) {
      int count = min(mx[s], my[s]);

      for (int j = 0; j < count; j++) {
        answer += s;
      }
    }
  }

  sort(answer.rbegin(), answer.rend());

  if (answer == "") {
    answer = "-1";
  } else if (answer[0] == '0') {
    answer = "0";
  }

  return answer;
}
