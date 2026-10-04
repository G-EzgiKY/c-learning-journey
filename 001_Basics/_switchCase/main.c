#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    switch(expression){
    case x:
    // code block
    case y:
    // code block
    break;
    default:
    //code block
    }

    - ifade switch bir kez değerlendirilir
    - ifadenin değeri, her birirnin değerleriyle karşılaştırılır
    - case bir eşleşme varssa, ilgili kod bloğu yürütür
    - ifade break, anahtar blogundan çıkar ve yürütmeyi durdurur.
    - ifade default isteğe bağlıdır ve büyük/küçük harf eşleşmesi yoksa çalıştırılacak bazı kodları belirtir.

    */

    int day = 7;
    switch (day)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("thuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;

    default:
        printf("there is no such a day");
        break;
    }
    return 0;
}