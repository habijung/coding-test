#
# Created by habi on 2023-08-01.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1878
#


def check(arr):
    if arr[0] == arr[1]:
        return arr[2]
    elif arr[0] == arr[2]:
        return arr[1]
    else:
        return arr[0]


def solution(v):
    answer = []
    vx = []
    vy = []

    for i in range(3):
        vx.append(v[i][0])
        vy.append(v[i][1])

    answer = [check(vx), check(vy)]

    return answer
