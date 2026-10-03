#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1. TBMM'inde toplantı yeter sayisinin sağlanip sağlanamadigini kontrol eden program

    2. girilen sayinin tek mi çift mi oldugunu bulan program
    */

    // 1.

    int pA, pB, pC, currentCouncilor; // mevut meclis uyesi

    const int sumCouncilor = 600;

    printf("\nmeclisteki partilerin milletvekili sayilarini girin: ");
    scanf("%d%d%d", &pA, &pB, &pC);

    currentCouncilor = pA + pB + pC;
    if (currentCouncilor < 200)
    {
        printf("\n gerekli cogunluk saglanamadi toplanti yeter sayisi 200 milletvekilidir.");
        printf("\n TOPLANTİYA ARA VERİLDİ");
    }
    else
    {
        printf("\n meclis toplantiya hazir. yeterli cogunluk saglandi.");
    }

    return 0;
}