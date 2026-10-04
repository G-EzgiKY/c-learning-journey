#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    bir gsm operatoru 4 dk kadar konusma ucretini 0.30 tl olarak belirlemiştir ancak konusma sresi 4 dakikayı asarsa bundan sonraki her dakika için ek oalrak 0.07 tl almaktadır. telefon görüşmesinin süresini dak,ka c,ns,nden g,rd, alan ve konuşmanın üceritini hesaplayan program
    */

    int dakika;
    float ucret;

    printf("kac dakika konusacaginizi belirtiniz: ");
    scanf("%d", &dakika);

    if (dakika <= 4)
    {
        ucret = 0.30;
    }
    else if (dakika > 4)
    {
        ucret = 0.30 + ((dakika - 4) * 0.07);
    }
    printf("%d dakikalik konusmanizin ucreti %.2f", dakika, ucret);

    return 0;
}