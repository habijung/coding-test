//
// Created by habi on 2023-08-10.
// Lv.1: 카드 뭉치
// https://programmers.co.kr/learn/courses/30/lessons/159994
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2,
                vector<string> goal) {
  string answer = "";

  reverse(cards1.begin(), cards1.end());
  reverse(cards2.begin(), cards2.end());

  for (int i = 0; i < goal.size(); i++) {
    if (cards1[cards1.size() - 1] != goal[i] &&
        cards2[cards2.size() - 1] != goal[i]) {
      answer = "No";
      break;
    } else if (cards1[cards1.size() - 1] == goal[i]) {
      answer = "Yes";
      cards1.pop_back();
    } else if (cards2[cards2.size() - 1] == goal[i]) {
      answer = "Yes";
      cards2.pop_back();
    }
  }

  return answer;
}
