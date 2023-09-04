//
// Created by habi on 2023-09-04.
// Lv.2: 전화번호 목록
// https://school.programmers.co.kr/learn/courses/30/lessons/42577
//

#include <map>
#include <string>
#include <vector>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string, int> m;

    for (vector<string>::iterator iter = phone_book.begin(); iter != phone_book.end(); iter++) {
        m[*iter] = (*iter).length();
    }

    for (map<string, int>::iterator iter1 = m.begin(); iter1 != m.end(); iter1++) {
        for (map<string, int>::iterator iter2 = iter1; iter2 != m.end(); iter2++) {
            string num1 = iter1->first;
            string num2 = iter2->first;
            int count1 = iter1->second;
            int count2 = iter2->second;

            if (num1[0] == num2[0] && num1 != num2) {
                bool check = num2.find(num1) != string::npos ? true : false;

                if (check) {
                    return false;
                } else {
                    // Key가 정렬된 상태(map)에서 find를 실행하기 때문에,
                    // check == false라는 것은 나머지 번호에 대해서 확인하지 않고 넘어가도됨.
                    break;
                }
            }
        }
    }

    return answer;
}
