#include<stdio.h>
#include "grades.h"
//#ifndef GRADES_H
//#define GRADES_H
/*#ifndef STUDENT_DOT_H
#define STUDENT_DOT_H*/
int grade(int SRN)
{
    
    int cgpa=0;
    int res1 = 0;
    int res2 = 0;
    int res3 = 0;
    //int m1[6];
    //int m2[6];
    //int m3[6];
    char sub[][20] = {"Physics", "Maths", "EEE", "Mech", "C.S", "EVS"};
    //printf("Enter your SRN : \n");
    //scanf("%d", &SRN);
    if (SRN == 1)
    {
        /*int m1[4] = {90, 89, 88, 94};
        int m2[4] = {89, 91, 85, 90};
        int m3[4] = {86, 94, 78, 88};*/

        int m1[6]={34,45,64,79,38,59};
  	int m2[6]={74,89,27,37,59,30};
  	int m3[6]={90,98,46,94,95,24};
  	for (int i = 0; i < 6; i++) {
     	printf("%s\t\t\t\%d\t\%d\t\%d\n",sub[i],m1[i],m2[i],m3[i]);
     	res1=res1+m1[i];
     	res2=res2+m2[i];
     	res3=res3+m3[i];
}
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
   

        
    }
    else if (SRN == 2)
    {
        int m1[6]={35,35,84,29,38,29};
  	int m2[6]={34,39,57,37,39,20};
  	int m3[6]={70,98,87,94,55,94};
  	for (int i = 0; i < 6; i++) {
     	printf("%s\t\t\t%d\t%d\t%d\n", sub[i],m1[i],m2[i],m3[i]);
     	res1=res1+m1[i];
     	res2=res2+m2[i];
     	res3=res3+m3[i];
}
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
   }
    else if (SRN == 3)
    {
        int m1[6]={74,45,24,29,38,29};
  	int m2[6]={34,39,32,37,39,20};
  	int m3[6]={70,68,49,94,55,74};
  	for (int i = 0; i < 6; i++) {
     		printf("%s\t\t%d\t%d\t%d\n",sub[i],m1[i],m2[i],m3[i]);
     		res1=res1+m1[i];
     		res2=res2+m2[i];
     		res3=res3+m3[i];
}
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
   }

else if(SRN == 3)
    {
        int m1[6]={90,45,24,29,38,29};
  	int m2[6]={34,39,32,37,39,20};
  	int m3[6]={30,58,39,94,55,94};
  	for (int i = 0; i < 6; i++) {
     	printf("%s\t\t%d\t%d\t%d\n", sub[i],m1[i],m2[i],m3[i]);
     	res1=res1+m1[i];
     	res2=res2+m2[i];
     	res3=res3+m3[i];
}
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
   }
    else if(SRN== 4)
    {
        int m1[6]={67,45,24,29,38,29};
  	int m2[6]={34,39,32,37,39,10};
  	int m3[6]={72,28,89,94,55,94};
  	for (int i = 0; i < 6; i++) {
     	printf("%s\t\t%d\t%d\t%d\n", sub[i],m1[i],m2[i],m3[i]);
     	res1=res1+m1[i];
     	res2=res2+m2[i];
     	res3=res3+m3[i];
}
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
   }
    else if(SRN == 5)
    {
        int m1[6]={59,45,24,29,38,29};
  	int m2[6]={34,59,32,37,19,20};
  	int m3[6]={67,34,39,94,55,94};
  	for (int i = 0; i < 6; i++) {
     	printf("%s\t\t%d\t%d\t%d\n", sub[i],m1[i],m2[i],m3[i]);
     	res1=res1+m1[i];
     	res2=res2+m2[i];
     	res3=res3+m3[i];
    }
    cgpa=(res1+res2+res3)/100;
     printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",res1,res2,res3,cgpa);
    }
    else if(SRN>=6){
        printf("NO DATA AVALIABLE\n");
    }
    switch(cgpa)
    {
        case 10: printf(" \t\tGRADE :- S   ");
            break;
        case 9: printf("  \t\tGRADE :- A    ");
            break;
        case 8: printf("   \t\tGRADE :- B     ");
            break;
        case 7: printf("  \t\tGRADE :- C      ");
            break;
        case 6: printf("   \t\tGRADE :- D      ");
            break;
        case 5: printf("   \t\tGRADE :- E       ");
            break;
        case 4: printf("  \t\tGRADE :- Fail   ");
            break;
        default: printf("   \t\tNONE           ");
            break;
    }
    //printf("%s\n", student(SRN));
    return 0;
    }
