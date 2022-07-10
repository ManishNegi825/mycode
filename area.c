#include<stdio.h>
int main()
{
    float area,radius,pie=3.14;
    printf("enter the value of a radius = ");
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("area of a circle is %f having the radius %f",area,radius);

    return 0;
}