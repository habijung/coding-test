#
# Created by habi on 2023-08-03.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1881
#

def solution(sticker):
    answer = 0
    N = len(sticker)

    # Case 1) N = 1 스티커 사용
    sum1 = [0 for i in range(N)]
    sum1[0] = sticker[0]

    if N > 1:
        sum1[1] = sticker[0]

    for i in range(N):
        if i > 1:
            sum1[i] = max(sum1[i - 2] + sticker[i], sum1[i - 1])

    # Case 2) N = 1 스티커 미사용
    sum2 = [0 for i in range(N)]
    sum2[0] = 0

    if N > 1:
        sum2[1] = sticker[1]

    for i in range(N):
        if i > 1:
            sum2[i] = max(sum2[i - 2] + sticker[i], sum2[i - 1])

    # Case 1에서 마지막 스티커를 사용하지 않기 때문에 N - 2까지의 점수를 계산해야함
    answer = max(sum1[N - 2], sum2[N - 1]) if N > 1 else max(sum1[0], sum2[0])

    return answer
