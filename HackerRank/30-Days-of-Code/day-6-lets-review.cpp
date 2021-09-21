/*
    - Problem
    https://www.hackerrank.com/challenges/30-review-loop/problem
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string str;
    
    /* get the number of lines */
    cin >> n;
    cin.ignore(); // ignore '\n'
    
    for (int i = 0; i < n; i++) {
        string str_odd, str_even;
        getline(cin, str);
        
        for (int j = 0; j < str.length(); j++) {
            if (j % 2 == 0) str_odd  += str[j];
            else            str_even += str[j];
        }
        
        cout << str_odd << " " << str_even << endl;
    }
    
    return 0;
}
