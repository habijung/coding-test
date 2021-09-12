/*
    - Problem
    https://www.hackerrank.com/challenges/30-operators/problem
*/


#include <iostream>
using namespace std;

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    double total_cost = meal_cost + tip + tax;
    
    cout << (int)round(total_cost) << endl;
}
