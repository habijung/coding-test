//
// Created by habi on 2023-08-11.
// Lv.1: 대충 만든 자판
// https://programmers.co.kr/learn/courses/30/lessons/160586
//

/*
 * Test Case
 * ["ABACD, "BCEFD"], ["ABCD", "AABB"] -> [9, 4]
 * ["AA"], ["B"] -> [-1]
 * ["AGZ", "BSSS"], ["ASA", "BGZ"] -> [4, 6]
 * ["AGB", "BSSS"], ["AGZ", "BSSS"] -> [-1, 7]
 * ["ABCD"], ["ABCE", "DAAA"] -> [-1, 7]
 * ["ABACD", "BCEFC"], ["XABCD", "AABB"] -> [-1, 4]
 */

#include <map>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
  vector<int> answer;

  // {"A": 문자의 거리 + 1} 모양 만들기
  map<char, int> m;
  map<char, int>::iterator iter;

  for (int i = 0; i < keymap.size(); i++) {
    string s = keymap[i];

    for (int j = 0; j < s.length(); j++) {
      char c = s[j];

      if (m.count(c) == 0 || j + 1 < m[c]) {
        m[c] = j + 1;
      }
    }
  }

  // 키 값 찾기
  for (int i = 0; i < targets.size(); i++) {
    string s = targets[i];
    int count = 0;

    for (int j = 0; j < s.length(); j++) {
      // 현재 자판으로 입력할 수 없는 문자가 나오면 -1을 return
      if (m.count(s[j]) == 0) {
        count = 0;
        break;
      }

      count += m[s[j]];
    }

    count = count == 0 ? -1 : count;
    answer.push_back(count);
  }

  return answer;
}
