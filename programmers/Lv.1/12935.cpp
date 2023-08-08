//
// Created by habi on 2023-08-08.
// Lv.1: 제일 작은 수 제거하기
// https://programmers.co.kr/learn/courses/30/lessons/12935
//

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
  vector<int> answer;
  vector<int> tmp = arr;
  int num = 0;

  sort(tmp.begin(), tmp.end());

  num = tmp[0];

  // remove()는 지울 값을 맨 뒤로 보내고 다음 인덱스를 반환함.
  // 그래서 그 지점부터 벡터의 끝까지 erase()로 다시 지워줌.
  arr.erase(remove(arr.begin(), arr.end(), num), arr.end());

  if (arr.size() > 0) {
    answer = arr;
  } else {
    answer.push_back(-1);
  }

  return answer;
}
