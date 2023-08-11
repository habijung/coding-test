//
// Created by habi on 2023-08-11.
// Lv.1: 추억 점수
// https://programmers.co.kr/learn/courses/30/lessons/176963
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning,
                     vector<vector<string>> photo) {
  vector<int> answer;

  for (int i = 0; i < photo.size(); i++) {
    int count = 0;

    for (int j = 0; j < name.size(); j++) {
      vector<string>::iterator iter;
      iter = find(photo[i].begin(), photo[i].end(), name[j]);

      if (iter != photo[i].end()) {
        count += yearning[j];
      }
    }

    answer.push_back(count);
  }

  return answer;
}
