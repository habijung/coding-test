/*
* Created by habi on 2021-09-05.
* Lv.1: 직사각형 별찍기
* https://programmers.co.kr/learn/courses/30/lessons/12969
*
* Solution
* https://habijung.xyz/programmers/programmers-rectangle-star/
 */

#include <iostream>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++)
            cout << "*";
        
        cout << endl;    
    }
    
    return 0;
}
