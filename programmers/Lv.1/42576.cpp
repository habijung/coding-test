//
// Created by habi on 2023-09-04.
// Lv.1: 완주하지 못한 선수
// https://school.programmers.co.kr/learn/courses/30/lessons/42576
//

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;// {참가자: 명수}
    map<string, int>::iterator iter;

    for (int i = 0; i < participant.size(); i++) {
        m[participant[i]] += 1;
    }

    for (int i = 0; i < completion.size(); i++) {
        m[completion[i]] -= 1;
    }

    for (iter = m.begin(); iter != m.end(); iter++) {
        if (iter->second == 1) {
            answer = iter->first;
        }
    }

    return answer;
}
