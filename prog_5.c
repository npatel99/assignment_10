#include<stdio.h>
/*Write a function to print first N odd natural numbers. (TSRN)
**/

void toPrintOddNaturalNumber(int n)
{
    int i = 1;
    while(n>0)
    {
        printf("%d ", 2*i-1);
        i++;
        n--;
    }
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("first %d odd natural number: ", number);
    toPrintOddNaturalNumber(number);

    return 0;
}
