#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Conditions and if Statemnt (koşullu ifadeler)

    if : belirtilen kosul dogruysa yürütülecek kod bloğunu belirtmek için kuallanılır

    else : aynı koşul yanlışşsa yürütülecek kod bloğunu belirtmek için kullanılır

    else if : ilk koşul yanlışsa, test edilecek yeni bir koşul belirtmek için kullanılır.

    switch : yürütülecek birçok alternatif kod bşoğ belirtmek için kullanılır.

    */

    int x, y;
    x = 7;
    y = 5;

    if (x < y)
    {
        printf("%d sayisi %d sayisindan kucuktur. ", x, y);
    }
    else if (x > y)
    {
        printf("%d sayisi %d sayisindan buyuktur. ", x, y);
    }
    else
    {
        printf("%d ve %d sayilari aslinda yok. ", x, y);
    }

    /*
    1. kullanıcıdan alıan sayıları karşılaştır 2. basit bir kitap şipariş ve indirim programı
     */

    // 1.

    int n1, n2;
    n1 = 0;
    n2 = 0;
    printf("enter two number: ");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        printf("number1 is greater than number2 variable\n");
    }
    else if (n1 < n2)
    {
        printf("number2 is greater than number1 variable\n");
    }
    else
    {
        printf("number1 is equal number2 variable\n");
    }

    // 2.

    int bookPrice, orderQuantity; // kitabin fiyatı ve miktari
    float discountRate,
        noDiscountPrice, discountPrice; // indirim oranı,indirimsiz fiyati, kitabın indirimli fiyatı,toplam veriables

    bookPrice = 20;
    orderQuantity = 0;
    printf("\n kaç adet kitap siparis etmek isityorsunuz:");
    scanf("%d", &orderQuantity);

    if (5 <= orderQuantity && orderQuantity <= 15)
    {
        discountRate = 10;
        discountPrice = (bookPrice * orderQuantity) - ((bookPrice * orderQuantity) * discountRate / 100);
        noDiscountPrice = orderQuantity * bookPrice;
        printf("\n indirimsiz fiyati: %.2f ,indirim orani: %.2f, indirimli fiyati : %.2f", noDiscountPrice, discountRate, discountPrice);
    }
    else if (15 < orderQuantity)
    {
        discountRate = 15;
        discountPrice = (bookPrice * orderQuantity) - ((bookPrice * orderQuantity) * discountRate / 100);
        noDiscountPrice = orderQuantity * bookPrice;
        printf("\n indirimsiz fiyati: %.2f ,indirim orani: %.2f, indirimli fiyati : %.2f", noDiscountPrice, discountRate, discountPrice);
    }
    else
    {
        bookPrice = bookPrice * orderQuantity;
        printf("\n fiyat: %d", bookPrice);
    }

    return 0;
}