//
// Created by habi on 2023-08-11.
// Lv.1: 공원 산책
// https://programmers.co.kr/learn/courses/30/lessons/172928
//

/*
 * Test Case
 * ["SOO", "OOO", "OOO"], ["E 2", "S 2", "W 1"] -> [2, 1]
 * ["SOO", "OXX", "OOO"], ["E 2", "S 2", "W 1"] -> [0, 1]
 * ["OSO", "OOO", "OXO", "OOO"], ["E 2", "S 3", "W 1"] -> [0, 0]
 * ["OOO", "XSX", "OOO", "OXO"], ["S 2", "E 1", "W 1", "N 2", "N 1"] -> [0, 1]
 * ["XXX", "XSX", "XXX"], ["S 2", "E 1", "W 1", "N 2", "N 1"] -> [1, 1]
 */

#include <map>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
  vector<int> answer;

  // 공원 사이즈 저장
  int W = park[0].length();
  int H = park.size();

  // 현재 위치 저장
  int x = 0;
  int y = 0;

  // 장애물 저장
  map<int, vector<int>> xx; // 같은 y 값에 있는 x 축의 장애물
  map<int, vector<int>> yy; // 같은 x 값에 있는 y 축의 장애물

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (park[i][j] == 'S') {
        x = j;
        y = i;
      }

      if (park[i][j] == 'X') {
        xx[i].push_back(j);
        yy[j].push_back(i);
      }
    }
  }

  // 좌표 계산
  for (int i = 0; i < routes.size(); i++) {
    char dir = routes[i][0];    // 방향
    int n = routes[i][2] - '0'; // 거리
    bool move = true;           // 장애물 확인

    if (dir == 'S' && y + n < H) {
      // 움직이는 방향으로 장애물이 있는지 확인
      for (int j = 0; j < yy[x].size(); j++) {
        if (y < yy[x][j] && y + n >= yy[x][j]) {
          move = false;
          break;
        }
      }

      if (move) {
        y += n;
      }
    } else if (dir == 'N' && y - n >= 0) {
      for (int j = 0; j < yy[x].size(); j++) {
        if (y > yy[x][j] && y - n <= yy[x][j]) {
          move = false;
          break;
        }
      }

      if (move) {
        y -= n;
      }
    } else if (dir == 'E' && x + n < W) {
      for (int j = 0; j < xx[y].size(); j++) {
        if (x < xx[y][j] && x + n >= xx[y][j]) {
          move = false;
          break;
        }
      }

      if (move) {
        x += n;
      }
    } else if (dir == 'W' && x - n >= 0) {
      for (int j = 0; j < xx[y].size(); j++) {
        if (x > xx[y][j] && x - n <= xx[y][j]) {
          move = false;
          break;
        }
      }

      if (move) {
        x -= n;
      }
    }
  }

  answer.push_back(y);
  answer.push_back(x);

  return answer;
}
