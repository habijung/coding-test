//
// Created by habi on 2023-08-11.
// Lv.1: 바탕화면 정리
// https://programmers.co.kr/learn/courses/30/lessons/161990
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
  vector<int> answer;
  vector<int> tx, ty;

  for (int i = 0; i < wallpaper.size(); i++) {
    for (int j = 0; j < wallpaper[i].length(); j++) {
      // (x, y) 형태라면 x에는 i 값, y에는 j 값이 들어감
      if (wallpaper[i][j] == '#') {
        tx.push_back(i);
        ty.push_back(j);
      }
    }
  }

  sort(tx.begin(), tx.end());
  sort(ty.begin(), ty.end());

  answer.push_back(tx[0]);
  answer.push_back(ty[0]);
  answer.push_back(tx[tx.size() - 1] + 1);
  answer.push_back(ty[ty.size() - 1] + 1);

  return answer;
}
