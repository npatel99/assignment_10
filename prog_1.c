#include<stdio.h>
/*Write a function to calculate the area of a circle. 
*(TSRS): Take Something Return Something
*function: int areaOfCircle(int radius)
*area = PI*radius*radius;
***/

float PI = 3.14;

float areaOfCircle(int radius)
{
    return PI*radius*radius;
}

int main()
{
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    printf("Area of circle is: %f ", areaOfCircle(radius));
    
    return 0;
}
