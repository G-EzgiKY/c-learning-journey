#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    girilen karakök içindeki sayının bir tam sayı olup olmadıgını belirten program
    */

    int number, squareRoot;

    printf("enter a positive number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Enter a positive number PLESASE!");
        return 0;
    }

    squareRoot = sqrt(number);

    if (squareRoot * squareRoot == number)
    {
        printf("square root of %d is an integer\n ", number);
    }
    else
    {
        printf("no it is not\n");
    }

    return 0;
}