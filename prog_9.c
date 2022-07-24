#include<stdio.h>
/*Write a function to check whether a given number contains a given digit or not. (TSRS)*/

int checkDigitInNumber(int number, int digit)
{
    int temp = number;
    while(temp)
    {
        if(temp/10 == digit)
            return 1;
        temp = temp/10;
    }
    return 0;
}

int main()
{
    int n, d;
    printf("Enter the number and digit to be search: ");
    scanf("%d %d", &n, &d);

    printf("given digit is present in number yes:1 or No:0 : %d", checkDigitInNumber(n,d));
    
    return 0;
}
