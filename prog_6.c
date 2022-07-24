#include<stdio.h>
/*Write a function to calculate the factorial of a number. (TSRS)
**/

int factorial(int n)
{
    int fact = 1, i = 1;
    if(n>=0)
    {
        while(i<=n)
        {
            fact = fact*i;
            i++;
        }
        return fact;
    }
    else
    {
        printf("can't find factorial of any negative number\n");
        return -1;
    }
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("factorial of %d! is: %d", number, factorial(number));

    return 0;
}
