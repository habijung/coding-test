#
# Created by habi on 2023-08-01.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1880
#


def solution(land):
    answer = 0

    # mat의 index가 len(land)가 넘어가도 문제가 없도록 +1 해줌
    mat = [[0 for i in range(4)] for j in range(len(land) + 1)]

    for j in range(len(land)):
        # land에 접근할 때는 길이에서 -1 해줘야함
        idx = (len(land) - 1) - j

        # mat의 아래에서부터 각 지점까지의 최댓값을 계산하기 위해 역으로 처리함
        # mat의 가장 아래는 어차피 0으로 채워져있어 값 계산에 영향을 주지 않음
        for k in range(4):
            mat[idx][k] = (
                max(
                    mat[idx + 1][(k + 1) % 4],
                    mat[idx + 1][(k + 2) % 4],
                    mat[idx + 1][(k + 3) % 4],
                )
                + land[idx][k]
            )

    answer = max(mat[0])

    return answer


def solution2(land):
    answer = 0

    mat = [0 for i in range(4)]

    for row in land:
        temp = mat.copy()

        for i in range(4):
            mat[i] = max(temp[:i] + temp[i + 1 :]) + row[i]

    answer = max(mat)

    return answer
