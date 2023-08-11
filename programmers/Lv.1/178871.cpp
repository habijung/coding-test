//
// Created by habi on 2023-08-11.
// Lv.1: 달리기 경주
// https://programmers.co.kr/learn/courses/30/lessons/178871
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
  vector<string> answer;
  map<string, int> m; // {사람: 순서}
  map<int, string> o; // {순서: 사람}

  for (int i = 0; i < players.size(); i++) {
    m[players[i]] = i;
    o[i] = players[i];
  }

  for (int i = 0; i < callings.size(); i++) {
    if (m.find(callings[i]) != m.end()) {
      int idx = m[callings[i]];
      string a = o[idx - 1]; // 앞 선수
      string b = o[idx];     // 뒤 선수

      // 선수 교체
      // 앞 -> 뒤
      m[a] += 1;
      o[idx] = a;

      // 뒤 -> 앞
      m[b] -= 1;
      o[idx - 1] = b;
    }
  }

  for (int i = 0; i < o.size(); i++) {
    answer.push_back(o[i]);
  }

  return answer;
}
