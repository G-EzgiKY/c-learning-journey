#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*finding square and cube of four numbers
    1. find and definethe variables we need
    2. determine the tpye of the varianles
    3. determine the area formule and perimeter formule of the circle
    4. get user datas
    5. perform the operation
    6. return, give the result
    */

    float myNumber1, myNumber3, myNumber2, myNumber4;
    myNumber1 = 0.0;
    myNumber2 = 0.0;
    myNumber3 = 0.0;
    myNumber4 = 0.0;

    printf("enter four numbers ");
    scanf("%f%f%f%f", &myNumber1, &myNumber2, &myNumber3, &myNumber4);

    printf("the number\t\t");
    printf("square of number \t\t");
    printf("cube of number\t\t\n");

    printf("---------------\t\t");
    printf("---------------\t\t\t");
    printf("---------------\t\t\n");

    printf("%f\t\t", myNumber1);
    printf("%f\t\t\t", myNumber1 * myNumber1);
    printf("%f\t\t\n", myNumber1 * myNumber1 * myNumber1);

    printf("\n\n");

    printf("%f\t\t", myNumber2);
    printf("%f\t\t\t", myNumber2 * myNumber2);
    printf("%f\t\t\n", myNumber2 * myNumber2 * myNumber2);

    printf("\n\n");

    printf("%f\t\t", myNumber3);
    printf("%f\t\t\t", myNumber3 * myNumber3);
    printf("%f\t\t\n", myNumber3 * myNumber3 * myNumber3);

    printf("\n\n");

    printf("%f\t\t", myNumber4);
    printf("%f\t\t\t", myNumber4 * myNumber4);
    printf("%f\t\t\n", myNumber4 * myNumber4 * myNumber4);

    printf("\n\n");

    return 0;
}