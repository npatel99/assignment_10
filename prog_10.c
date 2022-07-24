#include<stdio.h>
/*Write a function to print all prime factors of a given number.
* 18 ---> 2, 3, 3
* 12 ---> 2, 2, 3
* 36 ---> 2, 2, 3, 3
*/

void printPrimeFactor(int number)
{
    int i = 2;
    while(number>=i)
    {
        if(number%i == 0)
        {
            printf("%d ", i);
            number = number/i;
            i = 2;
        }
        else
            i++;
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("prime factors are: ");
    printPrimeFactor(n);
    
    return 0;
}
