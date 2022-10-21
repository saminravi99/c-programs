#include <stdio.h>

int main()
{
    int N, M;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printf("Enter the number of columns: ");
    scanf("%d", &M);

    if (N == 0 && M == 0)
    {
        printf("Number of distinct tight dominoes in the grid: 0\n");
    }
    else if (N == 0 || M == 0)
    {
        printf("Number of distinct tight dominoes in the grid: 0\n");
    }
    else if (N == 1 && M == 1)
    {
        printf("Number of distinct tight dominoes in the grid: 0\n");
    }
    else if (N == 1 && M > 1)
    {
        //possible formulas in this case:
        //1. M - 1
        printf("Number of distinct tight dominoes in the grid: %d\n", M - 1);
    }
    else if (N > 1 && M == 1)
    {
        //possible formulas in this case:
        //1. N - 1
        printf("Number of distinct tight dominoes in the grid: %d\n", N - 1);
    }
    else
    {
        if (N > 1 && M > 1)
        {
            //possible formulas in this case: 
            // (M-1) * N
            // (M * N) - N
            printf("Number of distinct tight dominoes in the grid: %d\n", (M - 1) * N);
        }
    }
    return 0;
}
