#include<stdio.h>
/*Write a function to calculate simple interest. (TSRS);
* function: float simpleInterest(int p, float r, float t)
* formula: si = p*r*t/100;
**/

float simpleInterest(int P, float R, float T)
{
    return (P*R*T)/100;
}
int main()
{
    int p;
    float r, t;
    printf("Enter principle amount[p], rate of interest[r], and time[t] in year: ");
    scanf("%d %f %f", &p, &r, &t);
    printf("simple interest will be: %f ", simpleInterest(p, r, t));
    
    return 0;
}
