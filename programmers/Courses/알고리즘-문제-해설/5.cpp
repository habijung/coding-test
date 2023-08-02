//
// Created by habi on 2023-08-02.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1880
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>> land) {
  int answer = 0;

  vector<int> vec(4);
  vector<vector<int>>::iterator iter;

  for (iter = land.begin(); iter != land.end(); iter++) {
    vector<int> row = *iter;
    vector<int> temp(4);
    copy(vec.begin(), vec.end(), temp.begin());

    for (int i = 0; i < 4; i++) {
      // vector temp로부터 해당 index를 제외한 나머지 elements만 남긴다.
      int save = temp[i];
      temp.erase(temp.begin() + i);

      // 최댓값과 row[index] 값의 합을 vector vec의 index 위치에 저장한다.
      vec[i] = *max_element(temp.begin(), temp.end()) + row[i];

      // vector temp에 원래 값 insert
      temp.insert(temp.begin() + i, save);
    }
  }

  answer = *max_element(vec.begin(), vec.end());

  return answer;
}
