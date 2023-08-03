//
// Created by habi on 2023-08-03.
//
// Problem
// https://school.programmers.co.kr/learn/courses/18/lessons/1879
//

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board) {
  int answer = 1234;

  int N = board.size();
  int M = board[0].size();
  vector<vector<int>> square = board;

  for (int i = 1; i < N; i++) {
    for (int j = 1; j < M; j++) {
      if (square[i][j] == 1) {
        square[i][j] =
            min({square[i - 1][j - 1], square[i][j - 1], square[i - 1][j]}) + 1;
      }
    }
  }

  int length = 0;
  vector<vector<int>>::iterator iter;

  for (iter = square.begin(); iter != square.end(); iter++) {
    vector<int> row = *iter;
    int max = *max_element(row.begin(), row.end());

    length = (length < max) ? max : length;
  }

  answer = pow(length, 2);

  return answer;
}
