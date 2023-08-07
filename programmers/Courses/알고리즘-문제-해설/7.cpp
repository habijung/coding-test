//
// Created by habi on 2023-08-07.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1882
//

#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int solution(vector<string> strs, string t) {
  int answer = 0;
  int N = t.length();
  const int INF = 99999;

  int dp[20001];

  for (int i = 0; i <= N; i++) {
    dp[i] = i < N ? INF : 0;
  }

  for (int i = N - 1; i >= 0; --i) {
    string tmp = "";

    // 단어 조각의 길이는 1 이상 5 이하의 조건을 사용함
    for (int j = 0; j < 5; j++) {
      if (i + j < N) {
        tmp += t[i + j];

        vector<string>::iterator iter = find(strs.begin(), strs.end(), tmp);
        if (iter != strs.end()) {
          // (i + j)로 하나의 조각을 완성하고,
          // 나머지 최소 조각 수는 dp[i + j + 1]에 저장되어 있음
          dp[i] = min(dp[i], dp[i + j + 1] + 1);
        }
      }
    }
  }

  answer = dp[0] != INF ? dp[0] : -1;

  return answer;
}
