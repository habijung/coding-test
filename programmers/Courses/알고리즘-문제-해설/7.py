#
# Created by habi on 2023-08-04.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1882
#


def solution(strs, t):
    answer = 0
    N = len(t)

    dp = [0 for i in range(N + 5)]

    for i in range(N):
        dp[i] = 999

    for i in range(N):
        idx = N - i - 1
        word = t[idx:]

        for j in range(len(word)):
            sub_word = word[: (j + 1)]

            if sub_word in strs:
                dp[idx] = min(dp[idx], dp[idx + len(sub_word)] + 1)

    answer = dp[0] if dp[0] != 999 else -1

    return answer


def solution2(strs, t):
    answer = 0
    N = len(t)
    INF = 99999

    dp = [INF for i in range(N + 1)]
    dp[N] = 0

    for i in range(N - 1, -1, -1):
        tmp = ""

        for j in range(5):
            if i + j < N:
                tmp += t[i + j]

                if tmp in strs:
                    # (i + j)로 하나의 조각을 완성하고, 나머지 최소 조각 수는 dp[i + j + 1]에 저장되어 있음
                    dp[i] = min(dp[i], dp[i + j + 1] + 1)

    answer = dp[0] if dp[0] != INF else -1

    return answer
