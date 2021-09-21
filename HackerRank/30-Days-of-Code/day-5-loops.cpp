/*
    - Problem
    https://www.hackerrank.com/challenges/30-loops/problem
*/

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    for (int i = 0; i < 10; i++)
        cout << n << " x " << i + 1 << " = " << n * (i + 1) << endl;

    return 0;
}
