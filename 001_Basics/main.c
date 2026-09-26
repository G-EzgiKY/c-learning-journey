#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VALUES
    char myLetter = 'C';
    // int myNumber = 8;
    float myNumberf = 8.2;
    double myNumberlf = 888888.2222222;

    printf("numara: %lf\n", myNumberlf); // output function: printf()

    const int x = 5;

    printf("constant value: %d", x);
    printf("\n%s", "where have you been?");
    printf("\ninteger size: %d", sizeof(int)); // sizeof(): boyutunu öğrenmemizi sağlar
    printf("\ninteger size: %d", sizeof(float));
    printf("\ninteger size: %d", sizeof(double));
    printf("\ninteger size: %d\n", sizeof(char));

    // MATH OPERATIONS
    int myNumber, myNumber2, myExtraction, mySum, myMultiplication;
    float myDivision;
    // myNumber = 8;
    myNumber2 = 2;
    mySum = myNumber + myNumber2;
    myExtraction = myNumber - myNumber2;
    myMultiplication = myNumber * myNumber2;
    myDivision = myNumber / myNumber2;

    printf("Sum: %d\n", mySum);
    printf("Extracction: %d\n", myExtraction);
    printf("Multiplication: %d\n", myMultiplication);
    printf("division: %f\n", myDivision);

    // INPUT FUNCTION
    // int myNumber;
    printf("Enter a number:");
    scanf("%d", &myNumber); // input function: scanf()
    printf("\nthe number you entered is %d", myNumber);

    // string variables

    // c dilinde string variable yoktur. C de her karakter tek tek depolanarak toplu bir char ifade oluşturulur. bunu liste oluşturarrak yapabiliriz. ne kadar karakterden olşturucağımızı öngördüğümüz kadar karakter sayısı belirleyerek liste oluştururuz. örn: char myCar[10]="Nissan";
    // burada 10 karakterlik bir char listesi oluşturduk ancak içerisinde yazan "nissan" ifadesi 6 karakterden oluşmakta. bu durumda geriye kalan 4 karakterlik kısıma null yani boş değer atayacak ve hafızada yer kaplamış olacak. bunu önlemin bir yolu yok bir dejavantaj olarak düşünebiliriz. (tabi ilerleyen zamanda malloc()/ realloc() gibi dinamik bellek yönetimleri ile daha istenen şekilde harekaet edilebilir)

    char myNumerical = 49;
    printf("karekterimizin sayisal degeri:%d\n", myNumerical);
    printf("karakterimizin ASCII degeri:%c\n", myNumerical); // ASCII kodları bilgisayarda görsel olarak gördüğümüz karakter,harf veya rakamların bilgisayar dilinde temsil edildiği seklidir. bilgisayar dünyasında 99 (01100011)bizim dünyamızda c harfidir. 84=T, 97=a, 49=1 ...
    printf("\n\n");

    char myCar[10] = "nissan";
    printf("my car brand is:%s\n ", myCar);

    // burada mycar char grubunu %c yerine %s ile çagırdıkk bunun sebebi myCar ın bir char grubu olmasıdır. bir metinsel ifadenin bütününü almak için %s ile çagırmamız lazım.

    char myFirstName[15];
    printf("enter the your firstname: ");
    scanf("%s", &myFirstName);
    printf("your firstname is: %s", myFirstName);
    // burada kullanıcıdan tek bir isim değil daha fazla isim almaya çalışsak ne yazıkkı bunu yapamayız çünkü c dilindeki scanf boşluktan sonrakini okuyamaz. scanf boşluk, sekme(tab) veya enter karakterlerini bir kelimenin sonu(ayraç) olarak kabul eder.
    // bu druumda çözüm olarak fgets() fonksiyonunu kullanabiliriz.
    // fgets(): kullanıcıdan içinded boşluk olan bir cümle veya uzun metinsel bir ifade almak istediğimizde en güzenli ve modern yolduur.

    while (getchar() != '\n')
        ;
    // scanf ve fgets çatışması: scanf sayısal veya metinsel verileri okurken kullanıcının bastığı enter("\n") tuşunu okuma buffer'ında (hafızasında) bırakır.
    // hafızadaki hayalet karakter: arka planda unutulan bu '\n' (enter) karakteri temizlenmezse hemen ardından gelen fgets fonnksiyonu kullanıcıya veri girmesi için süre tanımadan o boşluk/enter karakterini anında okur ve progtam direkt sonraki adıma geçer.
    // bu hafızada kalan fazla enter karakterini temizlemek için while (getchar()!= '\n'); komutunu kullanırız.
    char name[50];
    printf("\n\nenter your name: ");
    fgets(name, sizeof(name), stdin); // boslukları da içeri alır.

    printf("\nhello %s", name);

    return 0;
}