/*
 * Created by habi on 2021-09-11.
 * Lv.1: 행렬의 덧셈
 * https://programmers.co.kr/learn/courses/30/lessons/12950
 *
 * Solution
 * https://habijung.xyz/programmers/programmers-level-1/
 */

object Solution {
    def solution(arr1: Vector[Vector[Int]], arr2: Vector[Vector[Int]]): Vector[Vector[Int]] = {
        var vecSol: Vector[Vector[Int]] = scala.collection.immutable.Vector.empty
                
        for (i <- 0 until arr1.length) {
            var vecTemp: Vector[Int] = scala.collection.immutable.Vector.empty
            
            for (j <- 0 until arr1(i).length)
                vecTemp = vecTemp :+ (arr1(i)(j) + arr2(i)(j))
            
            vecSol = vecSol :+ vecTemp
        }
        
        return vecSol
    }
}
