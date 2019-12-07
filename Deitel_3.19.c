#include <stdio.h>
int main()
{
    //Bazi degiskenlerin, "float" tipine cevirilmesi gerekebilir.
    int haftalik_satis_tutari,haftalik_maas;
    int haftalik_fix_kazanc = 200;
    printf("Satis elemaninin, TL cinsinden haftalik satis tutarini giriniz: (Cikmak icin -1 giriniz.) ");
    scanf("%d",&haftalik_satis_tutari);
    while(haftalik_satis_tutari != -1){
        haftalik_maas = haftalik_fix_kazanc + (haftalik_satis_tutari*9/100);
        printf("Haftalik maas: %d \n",haftalik_maas);
        printf("Satis elemaninin, TL cinsinden haftalik satis tutarini giriniz: (Cikmak icin -1 giriniz.) ");
        scanf("%d",&haftalik_satis_tutari);
    }
    printf("Bye.\n");
}
