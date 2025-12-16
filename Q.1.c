#include<stdio.h>
int main(){
    
    int sub1,sub2,sub3,sub4,sub5;
    float avg;

    printf("first number (out of 100):");
    scanf("%d",&sub1);

    printf("secound number (out of 100):");
    scanf("%d",&sub2);

    printf("third number (out of 100):");
    scanf("%d",&sub3);

    printf("four number (out of 100):");
    scanf("%d",&sub4);
    
    printf("five number (out of 100):");
    scanf("%d",&sub5);

     avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
    printf("AVERAGE = %.2f\n",avg);

    if(avg >=90)
        printf("Grade:A+\n");
    else if(avg>=80)
        printf("Grade: A\n");
    else if (avg>=70)
        printf("Grade: B\n");
    else if (avg>=60)
        printf("Grade: c\n");
    else if (avg>=50)
        printf("Grade: D\n");
    else
    printf("better luck next time:Fail\n");
    
    return 0;
}