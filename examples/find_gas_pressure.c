#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kapalı bir kaptaki gaz basıncını hesaplayan program

    formule:
    basınc=(mol sayısı * R sabiti * sıcaklık)/ hacim
    */

    float pressure, constantR;
    int numberOfMoles, volume, heat;
    constantR = 0.82;
    printf(" enter volume of cup:");
    scanf("%d", &volume);
    printf(" enter heat of cup:");
    scanf("%d", &heat);
    printf(" enter numberOfMoles of cup:");
    scanf("%d", &numberOfMoles);
    pressure = (numberOfMoles * constantR * heat) / volume;
    printf("\n %d volume cup's gas pressure : %f", volume, pressure);

    return 0;
}