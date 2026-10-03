#include <stdio.h>
#include <stdlib.h>

int main()
{
    // kenar uzunluklari verilen üçgemnlerin türünü bulma: grniş,dar,dik
    //  genis: a^2>b^2+c^2
    //  dar: a^2<b^2+c^2
    //  dik: a^2=b^2+c^2

    int a, b, c, kenar1, kenar2, kenar3;
    printf("ucgeninizin kenarlarini giriniz: ");
    scanf("%d%d%d", &kenar1, &kenar2, &kenar3);

    if (kenar1 + kenar2 <= kenar3 || kenar1 + kenar3 <= kenar2 || kenar2 + kenar3 <= kenar1)
    {
        printf("Bu kenar uzunluklariyla bir ucgen olusturulamaz!\n");
        return 0;
    }

    if (kenar1 > kenar2 && kenar1 > kenar3)
    {
        a = kenar1;
        b = kenar2;
        c = kenar3;
    }
    else if (kenar2 > kenar1 && kenar2 > kenar3)
    {
        a = kenar2;
        b = kenar1;
        c = kenar3;
    }
    else
    {
        a = kenar3;
        b = kenar1;
        c = kenar2;
        printf("bu secildi");
    }

    if (a * a > b * b + c * c)
    {
        printf("girmis oldugunuz %d-%d-%d ucgeni bir GENIS acili ucgendir", kenar1, kenar2, kenar3);
    }
    else if (a * a < b * b + c * c)
    {
        printf("girmis oldugunuz %d-%d-%d ucgeni bir DAR acili ucgendir", kenar1, kenar2, kenar3);
    }
    else
    {
        printf("girmis oldugunuz %d-%d-%d ucgeni bir DIK acili ucgendir", kenar1, kenar2, kenar3);
    }
    return 0;
}