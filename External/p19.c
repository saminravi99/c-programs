#include<stdio.h>

// Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer.

/*
Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
*/

// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-


int main()
{
    int customer_id, unit;
    char name[20];
    float bill;
    printf("Enter the customer id: ");
    scanf("%d", &customer_id);
    printf("Enter the name: ");
    scanf("%s", name);
    printf("Enter the unit consumed: ");
    scanf("%d", &unit);
    if (unit <= 199)
    {
        bill = unit * 1.20;
    }
    else if (unit >= 200 && unit < 400)
    {
        bill = unit * 1.50;
    }
    else if (unit >= 400 && unit < 600)
    {
        bill = unit * 1.80;
    }
    else
    {
        bill = unit * 2.00;
    }
    if (bill > 400)
    {
        bill = bill + bill * 0.15;
    }
    if (bill < 100)
    {
        bill = 100;
    }
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", unit);
    printf("Bill: %.2f\n", bill);
    return 0;
}