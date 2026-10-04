#include <stdio.h>
#include <stdlib.h>

/*
herhangi bir karakteri gizli oalrak alan ve bu karakterin bir harf olup olmadıgını bulan ve kucuk harf mi buyuk harf mi oldugunu bulan program*/

int main()
{
    char myCharacter;

    printf("enter a character:");
    scanf("%c", &myCharacter);

    if ((myCharacter >= 'A') && (myCharacter <= 'Z'))
    {
        printf("%c is an uppercase letter\n", myCharacter);
    }
    else if ((myCharacter >= 'a') && (myCharacter <= 'z'))
    {
        printf("%c is an lowercase letter\n", myCharacter);
    }
    else
    {
        printf("%c is not a letter\n", myCharacter);
    }
    return 0;
}