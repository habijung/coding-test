//
// Created by habi on 2023-09-05.
// Lv.2: 올바른 괄호
// https://school.programmers.co.kr/learn/courses/30/lessons/12909
//

#include <iostream>
#include <string>
using namespace std;

bool solution(string s) {
    bool answer = true;
    int cl = 0;
    int cr = 0;

    for (auto ss: s) {
        if (ss == '(') {
            cl++;
        } else {
            cr++;
        }

        // case: "())", "())("
        if (cl < cr) {
            return false;
        }
    }

    // case: "())"
    if (cl != cr) {
        return false;
    }

    return true;
}
