#include<stdio.h>
/*Write a function to print first N natural numbers (TSRN)**/

void toPrintNaturalNumber(int n)
{
    int i = 1;
    while(n>0)
    {
        printf("%d ", i);
        i++;
        n--;
    }
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("first %d natural number: ", number);
    toPrintNaturalNumber(number);

    return 0;
}
