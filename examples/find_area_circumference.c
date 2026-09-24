#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Finding the area and circumference of a circle
    1. find and definethe variables we need
    2. determine the tpye of the varianles
    3. determine the area formule and perimeter formule of the circle
    4. get user datas
    5. perform the operation
    6. return, give the result
    */

    float r, area, circumference;
    printf("entered a circle r: ");
    scanf("%f", &r);
    const float PI = 3.1415;
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("\nresult of area: %f", area);
    printf("\nresult of circumference: %f", circumference);

    return 0;
}