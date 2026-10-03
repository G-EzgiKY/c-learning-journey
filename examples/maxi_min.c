#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    kullanicidan alinan uc sayinin en buyugunu ve en kucugunu kosullu ifadelerle tespit etme
    */

    int n1, n2, n3, max, min;

    printf("\n enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        max = n1;
        if (n2 > n3)
        {
            min = n3;
        }
        else
        {
            min = n2;
        }
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        max = n2;
        if (n1 > n3)
        {
            min = n3;
        }
        else
        {
            min = n1;
        }
    }
    else if (n3 >= n2 && n3 >= n1)
    {
        max = n3;
        if (n2 > n1)
        {
            min = n1;
        }
        else
        {
            min = n2;
        }
    }
    printf("\n max : %d\n min : %d", max, min);
    return 0;
}