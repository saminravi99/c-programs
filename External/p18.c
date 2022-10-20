#include<stdio.h>

// Write a C program to calculate profit and loss on a transaction.

int main()
{
    int cost_price, selling_price;
    printf("Enter the cost price of the item: ");
    scanf("%d", &cost_price);
    printf("Enter the selling price of the item: ");
    scanf("%d", &selling_price);
    if (cost_price < selling_price)
    {
        printf("The seller has made a profit of %d\n", selling_price - cost_price);
    }
    else if (cost_price > selling_price)
    {
        printf("The seller has made a loss of %d\n", cost_price - selling_price);
    }
    else
    {
        printf("The seller has neither made a profit nor a loss\n");
    }
    return 0;
}