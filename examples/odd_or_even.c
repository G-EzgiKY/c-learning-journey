#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    girilen sayinin tek mi cift mi oldugunu bulan program
    */

    int number;

    printf("\n enter a number:");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("\n entered %d number is EVEN number", number);
    }
    else
    {
        printf("\n entered %d number is ODD number", number);
    }
    return 0;
}