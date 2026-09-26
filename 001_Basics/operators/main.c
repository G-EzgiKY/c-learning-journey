#include <stdio.h>
#include <stdlib.h>

int main()
{
    // operatörler, veriable lar ve değerler üzerinde işlem yapmak için kullanılırlar
    //  operatorler genellikle iki değeri bir araya getirmel için kullanısada bir veriable ile bir değeri veya bir veriable ile başka bir veriable i birlikte eklemek için de kullanılabilir.

    int myNumber, myNumber2, myNumber3;
    myNumber = 5 + 6; // sum operator
    myNumber2 = myNumber + 1;
    myNumber3 = myNumber + myNumber2;
    printf("my number is: %d\n", myNumber);
    printf("my number2 is: %d\n", myNumber2);
    printf("my number3 is: %d\n", myNumber3);

    //
    int x, y, sum, sub, multi, div, mod;
    x = 5;
    y = 2;
    sum = x + y;   //+ operator
    sub = x - y;   // - operator
    multi = x * y; // * operator
    div = x / y;   // / operator
    mod = x % y;
    printf("sum: %d\n", sum);
    printf("sub: %d\n", sub);
    printf("multi: %d\n", multi);
    printf("div: %d\n", div);
    printf("mod: %d\n", mod);

    //

    // ++ operator
    // mynumerical++; mynumerical=mynumerical +1 demektir
    int mynumerical;
    mynumerical = 7;
    printf("%d\n", mynumerical);

    printf("++mynumerical : %d\n", ++mynumerical); // önce arttır sonra yazdır

    printf("mynumerical++ : %d\n", mynumerical++); // önce yardır sonra arttır

    printf("%d\n", mynumerical);

    //
    // ++ operator
    // mynum--; mynum=mynum -1 demektir
    int mynum;
    mynum = 7;
    printf("%d\n\n", mynum);

    printf("--mynum : %d\n", --mynum); // önce eksilt sonra yazdır

    printf("mynum-- : %d\n", mynum--); // önce yazdır sonra eksilt

    printf("%d\n", mynum);

    // examples

    int a, b, c;
    a = 5;
    b = 2;
    c = 9;
    a++;                  // 6
    ++b;                  // 3
    c--;                  // 8
    a = b++;              // 3 ->4
    a = ++b;              // 5 b:5
    c = ++a;              // 6
    c = b--;              // 5 b:4
    c = --b;              // 3
    printf("a:%d\n", a);  // 6
    printf("b: %d\n", b); // 3
    printf("c: %d\n", c); // 3

    return 0;
}