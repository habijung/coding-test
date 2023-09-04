//
// Created by habi on 2023-09-04.
// Lv.2: 의상
// https://school.programmers.co.kr/learn/courses/30/lessons/42578
//

#include <map>
#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> m;
    map<string, int>::iterator miter;
    vector<vector<string>>::iterator viter;

    for (viter = clothes.begin(); viter != clothes.end(); viter++) {
        m[(*viter)[1]] += 1;
    }

    answer = 1;

    for (miter = m.begin(); miter != m.end(); miter++) {
        answer *= miter->second + 1;
    }

    answer -= 1;

    return answer;
}
