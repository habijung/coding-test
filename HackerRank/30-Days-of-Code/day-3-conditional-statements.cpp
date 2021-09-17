/*
    - Problem
    https://www.hackerrank.com/challenges/30-conditional-statements/problem
*/

/*
    Task
    Given an integer, n, perform the following conditional actions:

    - If n is odd, print Weird
    - If n is even and in the inclusive range of 2 to 5, print Not Weird
    - If n is even and in the inclusive range of 6 to 20, print Weird
    - If n is even and greater than 20, print Not Weird

    Complete the stub code provided in your editor to print whether or not n is weird.
*/

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    
    /* If n is odd, print Weird */
    if (N % 2 == 1)
        printf("Weird");
    
    /* If n is even and ... */        
    else {
        /* in the inclusive range of 2 to 5, print Not Weird */
        if (N >= 2 && N <= 5)
            printf("Not Weird");
        
        /* in the inclusive range of 6 to 20, print Weird */
        else if (N >= 6 && N <= 20)
            printf("Weird");
        
        /* greater than 20, print Not Weird */
        else
            printf("Not Weird");
    }

    return 0;
}
