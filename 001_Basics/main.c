#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VALUES
    char myLetter = 'C';
    // int myNumber = 8;
    float myNumberf = 8.2;
    double myNumberlf = 888888.2222222;

    printf("numara: %lf\n", myNumberlf); // output function: printf()

    const int x = 5;

    printf("constant value: %d", x);
    printf("\n%s", "where have you been?");
    printf("\ninteger size: %d", sizeof(int)); // sizeof(): boyutunu öğrenmemizi sağlar
    printf("\ninteger size: %d", sizeof(float));
    printf("\ninteger size: %d", sizeof(double));
    printf("\ninteger size: %d\n", sizeof(char));

    // MATH OPERATIONS
    int myNumber, myNumber2, myExtraction, mySum, myMultiplication;
    float myDivision;
    // myNumber = 8;
    myNumber2 = 2;
    mySum = myNumber + myNumber2;
    myExtraction = myNumber - myNumber2;
    myMultiplication = myNumber * myNumber2;
    myDivision = myNumber / myNumber2;

    printf("Sum: %d\n", mySum);
    printf("Extracction: %d\n", myExtraction);
    printf("Multiplication: %d\n", myMultiplication);
    printf("division: %f\n", myDivision);

    // INPUT FUNCTION
    // int myNumber;
    printf("Enter a number:");
    scanf("%d", &myNumber); // input function: scanf()
    printf("\nthe number you entered is %d", myNumber);

    return 0;
}