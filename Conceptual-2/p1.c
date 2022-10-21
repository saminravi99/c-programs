#include <stdio.h>

/**
 * Four players participate in the playoff tournament. The tournament is held according to the following scheme - the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.

It is known that in a match between two players, the one whose skill is greater will win.The tournament is called fair if the two players with the highest skills meet in the finals.Determine whether the given tournament is fair.


Output YES if the tournament is fair, or NO otherwise.


The skill of the first,second,third and fourth player is between 1-100.


>> Sample input -

3 7 9 5

4 5 6 9

5 3 8 1

6 5 3 2


>> Sample output -

YES

NO

YES

NO
*/

int main()
{
    int A, B, C, D;
    printf("Enter the skill of 1st player: ");
    scanf("%d", &A);
    printf("Enter the skill of 2nd player: ");
    scanf("%d", &B);
    printf("Enter the skill of 3rd player: ");
    scanf("%d", &C);
    printf("Enter the skill of 4th player: ");
    scanf("%d", &D);

    // among the 4 players , the highest skilled will be in 1 match and 2nd highest skilled will be in another match and if the 2 highest skills meet in the finals the game will be fair

    // at first determine the 2 highest skilled players from the 4 players input

    int highest;
    int secondHighest;

    if (A > B && A > C && A > D)
    {
        highest = A;
        if (B > C && B > D)
        {
            secondHighest = B;
        }
        else if (C > B && C > D)
        {
            secondHighest = C;
        }
        else if (D > B && D > C)
        {
            secondHighest = D;
        }
    }
    else if (B > A && B > C && B > D)
    {
        highest = B;
        if (A > C && A > D)
        {
            secondHighest = A;
        }
        else if (C > A && C > D)
        {
            secondHighest = C;
        }
        else if (D > A && D > C)
        {
            secondHighest = D;
        }
    }
    else if (C > A && C > B && C > D)
    {
        highest = C;
        if (A > B && A > D)
        {
            secondHighest = A;
        }
        else if (B > A && B > D)
        {
            secondHighest = B;
        }
        else if (D > A && D > B)
        {
            secondHighest = D;
        }
    }
    else if (D > A && D > B && D > C)
    {
        highest = D;
        if (A > B && A > C)
        {
            secondHighest = A;
        }
        else if (B > A && B > C)
        {
            secondHighest = B;
        }
        else if (C > A && C > B)
        {
            secondHighest = C;
        }
    }

    int winner1;
    int winner2;

    // now perform matches between 1st player with 2nd player
    // and 3rd player with 4th player

    if (A > B)
    {
        winner1 = A;
    }
    else
    {
        winner1 = B;
    }

    if (C > D)
    {
        winner2 = C;
    }
    else
    {
        winner2 = D;
    }

    // comparing the winner1 and winner2 with the highest and second highest skilled players
    if (winner1 == highest && winner2 == secondHighest || winner1 == secondHighest && winner2 == highest)
    {
        printf("YES the tournament is fair  \n");
    }
    else
    {
        printf("NO the tournament is not fair  \n");
    }
}
