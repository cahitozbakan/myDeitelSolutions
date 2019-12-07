#include <stdio.h>
int main()
{
    int sayi;
    int i=1;
    int en_buyuk=0;
    while(i<=10)
    {
        printf("Lutfen bir tam sayi giriniz:(Toplamda 10 tane olmali.) \n");
        scanf("%d",&sayi);
        if(sayi>en_buyuk)
            {
            en_buyuk=sayi;
            }
        i++;
    }
    printf("Girilen en buyuk sayi: %d",en_buyuk);
}
