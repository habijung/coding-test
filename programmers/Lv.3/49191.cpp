//
// Created by habi on 2023-09-16.
// Lv.3: 순위
// https://school.programmers.co.kr/learn/courses/30/lessons/49191
//

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector <vector<int>> results) {
    int answer = 0;
    int arr[n + 1][n + 1];

    // arr 초기화
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            arr[i][j] = 0;
        }
    }

    // results로 arr 업데이트
    for (auto r: results) {
        arr[r[0]][r[1]] = 1;
        arr[r[1]][r[0]] = -1;
    }

    // Floyd-Warshall 알고리즘으로 업데이트
    for (int k = 1; k < n + 1; k++) {
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                // i > k > j
                if (arr[i][k] == 1 && arr[k][j] == 1) {
                    arr[i][j] = 1;
                    arr[j][i] = -1;
                }

                // i < k < j
                if (arr[i][k] == -1 && arr[k][j] == -1) {
                    arr[i][j] = -1;
                    arr[j][i] = 1;
                }
            }
        }
    }

    // 다른 선수와의 결과가 0이 아니면 순위 확인 가능
    // 즉, 자기 자신이 0인 경우만 확인하면됨
    for (int i = 1; i < n + 1; i++) {
        int check = 0;

        for (int j = 1; j < n + 1; j++) {
            if (arr[i][j] == 0) {
                check += 1;
            }
        }

        if (check == 1) {
            answer += 1;
        }
    }

    return answer;
}
