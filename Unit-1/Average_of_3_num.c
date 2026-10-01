#include<stdio.h>
int main()
{
    float a,b,c,average;
    printf("Enter three number:");
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average=%.3f\n",average);
    return 0;
}
