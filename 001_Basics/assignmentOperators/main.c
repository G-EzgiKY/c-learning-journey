#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Assignment Operators (atama operatörleri)

    = -> x=7;
    += -> x+=2;   : x=x+2 demek
    -= -> x-=;    : x=x-2
    *= -> x*=2;   : x=x*2
    /= -> x/=2;   : x=x/2
    %= -> x%=2;   : x=x%2
    &= -> x&=2;   : x=x&2  bu ampersand işareti (&) : AND işlemine denktir.
    |= -> x|=2;   : x=x|2 // | : or işlemi
    ^= -> x^=2;   : x=x^2 // ^ sembolu XOR işlemidir : yani yalnızca ikisinden biri 1 olacak
    >>= -> x>>=2; : x=x>>2  // sağa 2 bit kaydır
    <<= -> x<<=2; : x=x<<2 // sola 2 birim kaydır (2 bit kaydır)

    */

    int myNumber;

    myNumber = 13;
    myNumber += 2;
    printf("\nmynumber: %d", myNumber);
    myNumber -= 2;
    printf("\nmynumber: %d", myNumber);
    myNumber *= 2;
    printf("\nmynumber: %d", myNumber);
    myNumber /= 2;
    printf("\nmynumber: %d", myNumber);
    myNumber %= 2;
    printf("\nmynumber: %d", myNumber);

    // buradan sonrakiler atama opertatörler arasında anlatılmıyor pek; daha çok bitwisw yani bit düzeyindeki işlemleri yapmak için kullanılıyor ve burada bahsediliyor

    int numberTwo, numberThree;
    numberTwo = 6; // 0000 0110

    numberTwo &= 3; //  0000 0110 & 0000 0011 = 0000 0010 : 2
    printf("\nnumberTwo: %d", numberTwo);
    numberTwo = 6;
    numberTwo |= 2;
    printf("\nnumberTwo: %d", numberTwo);
    numberTwo ^= 2; // 0000 0110 ^ 0000 0010 = 0000 0100 : 4
    printf("\nnumberTwo: %d", numberTwo);
    numberTwo >>= 1;
    printf("\nnumberTwo: %d", numberTwo);
    numberTwo <<= 2;
    printf("\nnumberTwo: %d", numberTwo);

    // example

    /*kullanıcıdan 4 basamaklı bşr sayı alalım ve bu sayının rakamlarının toplamını bulan program yapalım */

    int number, bolum, kalan, sum = 0;

    printf("\nenter a number :");
    scanf("%d", &number);

    // 4. basamağı bul
    bolum = number / 1000;
    sum += bolum;
    kalan = number % 1000;
    // 3. basamagı bul
    bolum = kalan / 100;
    sum += bolum;
    kalan = kalan % 100;
    // 2. basamagı bul;
    bolum = kalan / 10;
    sum += bolum;
    kalan = kalan % 10;
    // 1. basamagı bul
    sum += kalan;
    printf("\nsum: %d", sum);

    return 0;
}