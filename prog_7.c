#include<stdio.h>
/*Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
nCr = n!/(n-r)!*r! 
*/

int factorial(int n)
{
    int fact = 1, i = 1;
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    return fact;
}

int main()
{
    int n, r, comb;
    printf("Enter the n items and r selected at a time: ");
    scanf("%d %d", &n, &r);
    comb = (factorial(n))/(factorial(r)*factorial(n-r));
    printf("number of combinations are: %d\n", comb);
    
    return 0;
}
