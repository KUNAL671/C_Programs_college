#include<stdio.h>
int main()
{
    float radius,area;
    const float pi=3.14;
    printf("Enter radius of circle");
    scanf("%f",&radius);
    area= pi*radius*radius;
    printf("Area of circle=%.3f\n",area);
    return 0;
}


