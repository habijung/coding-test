#
# Created by habi on 2023-08-01.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1877
#


def solution(arr):
    l = len(arr)
    arr.sort()

    for i in range(l):
        if (i + 1) != arr[i]:
            return False

    return True
