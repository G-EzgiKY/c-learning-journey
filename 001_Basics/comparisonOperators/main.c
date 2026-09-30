#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    comparison Operators (karşılaştırma operatörleri)

    == : equal to  : x==y -> x ile y eşit ise
    != : not equal  : x!=y -> x ile y eşit değilse
    >  : greater than : x>y -> x, y den büyükse
    <  : less than  : x<y  -> x, y den küçükse
    >= : greater than or equal to  : x>=y  -> x, y'ye büyük eşitse
    <= : less than or equal to  : x<=y  -> x, y'ye küçük eşitse

    bir karşılaştırmanın dönüş değeri ya true dur ya da false tur. yani ya 1 dir ya 0 dır.

    */

    int x, y;
    x = 7;
    y = 2;
    printf("\nresult x=y: %d", x == y);  // false 0
    printf("\nresult x!=y: %d", x != y); // true 1
    printf("\nresult x>y: %d", x > y);   // true 1
    printf("\nresult x<y: %d", x < y);   // false 0
    printf("\nresult x>=y: %d", x >= y); // true 1
    printf("\nresult x<=y: %d", x <= y); // false 0

    /*
    Logical Operators ( mantıklsal operatörler)

    && : logical and : x>5 && x<10  -> x 5 ten büyük ve 10 küçük ise : her iki ifade de doğruysa true döndürür
    || : logical or  : x>5 || x<10  -> x 5 ten büyük veya 10 dan küçük ise : ifadelerden biri doğruysa true döndürür
    !  : logical not : !(x>5&&x<10) -> x 5 ten büyük 10 dan küçükse true olan cevabı false dönüştürür, x 5 ten büyük ve 10 dan küçük değilse false olan cevabı true ya dönüştürür. : sonucu tersine çevirin, sonuç doğruysa yanlış döndürür
    */

    printf("\nresult : %d", x > 5 && x < 10);                                                 // true 1
    printf("\nresult : %d", x > 5 || x == 10);                                                // true 1
    printf("\nresult : %d", !(x > 5 && x < 10 /*içerisi ture*/) /*dışarısı ! dolayı false*/); // false 0

    return 0;
}