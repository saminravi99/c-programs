#include <stdio.h>

/*
Mr. A  has a grid that has N rows and M columns. Each row is numbered from 1 to N from top to bottom. Each column is numbered from 1 to M from left to right.

Each tile in the grid contains a number. The numbers are arranged as follows:

Row 1 contains integers from 1 to M from left to right.

Row 2 contains integers from M+1 to 2×M from left to right.

Row 3 contains integers from 2×M+1 to 3×M from left to right.

And so on until row N.

A domino is defined as two different tiles in the grid that touch by their sides. A domino is said to be tight if and only if the two numbers in the domino have a difference of exactly 1. Count the number of distinct tight dominoes in the grid.


Two dominoes are said to be distinct if and only if there exists at least one tile that is in one domino, but not in the other.
*/

int main()
{
    int N, M;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printf("Enter the number of columns: ");
    scanf("%d", &M);

    int grid[N][M];

    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            grid[i][j] = i * M + j + 1;
        }
    }

    int count = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i + 1 < N && grid[i][j] + 1 == grid[i + 1][j])
            {
                count++;
            }
            if (j + 1 < M && grid[i][j] + 1 == grid[i][j + 1])
            {
                count++;
            }
        }
    }
    printf("Number of distinct tight dominoes in the grid: %d\n", count);

    return 0;
}
