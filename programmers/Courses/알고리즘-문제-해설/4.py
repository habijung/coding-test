#
# Created by habi on 2023-08-03.
#
# Problem
# https://school.programmers.co.kr/learn/courses/18/lessons/1879
#


def solution(board):
    answer = 1234

    N = len(board)
    M = len(board[0])
    square = board.copy()
    length = 0

    for i in range(N):
        for j in range(M):
            if (i > 0) and (j > 0) and (square[i][j] == 1):
                square[i][j] = (
                    min(square[i - 1][j - 1], square[i][j - 1], square[i - 1][j]) + 1
                )

    for row in square:
        length = max(row) if length < max(row) else length

    answer = pow(length, 2)

    return answer
