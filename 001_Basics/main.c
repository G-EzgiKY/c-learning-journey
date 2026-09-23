#include <stdio.h>
#include <stdlib.h>

int main()
{

    char myLetter = 'C';
    int myNumber = 8;
    float myNumberf = 8.2;
    double myNumberlf = 888888.2222222;

    printf("numara: %lf\n", myNumberlf);

    const int x = 5;

    printf("constant value: %d", x);
    printf("\n%s", "where have you been?");
    printf("\ninteger size: %d", sizeof(int)); // sizeof(): boyutunu öğrenmemizi sağlar
    printf("\ninteger size: %d", sizeof(float));
    printf("\ninteger size: %d", sizeof(double));
    printf("\ninteger size: %d", sizeof(char));

    return 0;
}