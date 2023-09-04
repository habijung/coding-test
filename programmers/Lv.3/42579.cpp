//
// Created by habi on 2023-09-04.
// Lv.3: 베스트앨범
// https://school.programmers.co.kr/learn/courses/30/lessons/42579
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> mcount;
    map<int, string> rmcount;
    vector<string> sorted_genres;

    // 1. 장르별 재생 횟수 계산
    for (auto i = 0; i < genres.size(); i++) {
        mcount[genres[i]] += plays[i];
    }

    // 2. 장르 정렬을 위해서 새로운 map에 {Value: Key}로 대입
    for (auto iter = mcount.begin(); iter != mcount.end(); iter++) {
        rmcount[iter->second] = iter->first;
    }

    // 3. 장르 순서별로 확인
    for (auto iter = rmcount.rbegin(); iter != rmcount.rend(); iter++) {
        string gen = iter->second;
        int arr_play[2] = {-1};
        int arr_num[2] = {-1};

        for (int i = 0; i < genres.size(); i++) {
            // 4. 상위 장르별로 상위 재생 횟수 2곡 저장
            if (genres[i] == gen) {
                if (arr_play[0] < plays[i]) {
                    arr_play[1] = arr_play[0];
                    arr_play[0] = plays[i];
                    arr_num[1] = arr_num[0];
                    arr_num[0] = i;
                } else if (arr_play[1] < plays[i]) {
                    arr_play[1] = plays[i];
                    arr_num[1] = i;
                } else {
                    continue;
                }
            }
        }

        for (int i = 0; i < 2; i++) {
            if (arr_num[i] != -1) {
                answer.push_back(arr_num[i]);
            }
        }
    }

    return answer;
}
