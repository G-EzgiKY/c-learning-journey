#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1. girilen sayının onlar ve birler basamağını bulan program

    2. girilen dört sayının aritmetik ortalamalarını bulan program*/

    // 1.

    int number, first, second;

    printf("pozitif bir sayi giriniz: ");
    scanf("%d", &number);

    first = number % 10;
    second = (number % 100) / 10;
    printf("\ngirdiğiniz sayinin onlar bsdsmsgi: %d", second);
    printf("\ngirdiğiniz sayinin birler bsdsmsgi: %d", first);

    // 2.

    float n1, n2, n3, n4, ao = 0;

    printf("\n1.sayiyi girisiniz: ");
    scanf("%f", &n1);
    printf("\n2.sayiyi girisiniz: ");
    scanf("%f", &n2);
    printf("\n3.sayiyi girisiniz: ");
    scanf("%f", &n3);
    printf("\n4.sayiyi girisiniz: ");
    scanf("%f", &n4);

    ao = (n1 + n2 + n3 + n4) / 4;
    printf("girdiginiz %f,%f,%f,%f bu dört sayinin aritmetik ortalamasi: %f", n1, n2, n3, n4, ao);

    return 0;
}