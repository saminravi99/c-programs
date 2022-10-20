#include<stdio.h>

/*
Write a C program to find the eligibility of admission for a professional course based on the following criteria

Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/

int main()
{
    int math, physics, chemistry, totalMarks;
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &math);
    totalMarks = physics + chemistry + math;
    if(math >= 65 && physics >= 55 && chemistry >= 50 && totalMarks >= 190 || math + physics >= 140)
        printf("The candidate is eligible\n");
    else
        printf("The candidate is not eligible\n");
    return 0;
}