//
// Created by habi on 2023-08-10.
// Lv.1: 가장 가까운 같은 글자
// https://programmers.co.kr/learn/courses/30/lessons/142086
//

#include <map>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
  vector<int> answer;
  map<char, int> m;

  for (int i = 0; i < s.length(); i++) {
    if (!m.count(s[i])) {
      answer.push_back(-1);
      m.insert({s[i], i});
    } else {
      answer.push_back(i - m[s[i]]);
      m[s[i]] = i;
    }
  }

  return answer;
}
