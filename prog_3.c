#include<stdio.h>
/*Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
**/

int checkNumberEvenOrOdd(int n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("number is even:1 or odd:0---> %d ", checkNumberEvenOrOdd(number));
    
    return 0;
}
