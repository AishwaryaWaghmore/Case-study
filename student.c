#include<stdio.h>
#include "grades.h"

void student(int SRN)
{
    printf("-------------------YOUR SCORES---------------\n");
    switch(SRN)
    {
        case 1: printf(" Spurti \n SEM -1 \n Branch - EC\n");
            break;
        case 2: printf(" Gouri \n SEM - 1 \n Branch - CSE\n");
            break;
        case 3: printf(" Aishwarya \n SEM -1 \n Branch - AIML\n");
            break;
        case 4: printf(" Sneha \n SEM - 1 \n Branch - CSE\n");
            break;
        case 5: printf(" Pragati \n SEM -1 \n Branch - EC\n");
            break;
        default:printf(" No data available\n");
            break;

    }
    
}
int main()
{
    int SRN;
    printf("Enter your SRN:\n");
    scanf("%d", &SRN);
    //int mar1[10], mar2[10], mar3[10];
    student(SRN);
    grade(SRN);
    return 0;
}