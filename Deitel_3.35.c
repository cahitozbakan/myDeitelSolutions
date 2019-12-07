#include <stdio.h>

int main()
{
    int sayi, birinci_basamak, ikinci_basamak, ucuncu_basamak, dorduncu_basamak, besinci_basamak;
    printf("Bes basamakli bir tamsayi giriniz.: ");
    scanf("%d",&sayi);
    
    besinci_basamak=sayi%10;
    dorduncu_basamak=(sayi/10)%10;
    ucuncu_basamak=(sayi/100)%10;
    ikinci_basamak=(sayi/1000)%10;
    birinci_basamak=(sayi/10000)%10;
    
    if(besinci_basamak==birinci_basamak && dorduncu_basamak==ikinci_basamak)
        printf("Girilen sayi, palindrome sayidir.");
    else
        printf("Girilen sayi, palindrome sayi degildir.");
    
}
