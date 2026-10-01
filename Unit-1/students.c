#include<stdio.h>
int main()
{
    int age;
    float height;
    double salary;
    char grade;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter height:");
    scanf("%f",&height);
    printf("Enter salary:");
    scanf("%lf",&salary);
    printf("Enter grade:");
    scanf(" %c",&grade);
    printf("Age=%d\n",age);
    printf("Height=%.4f\n",height);
    printf("Salary=%.4lf\n",salary);
    printf("Grade=%c\n",grade);
    return 0;
}


