#include <stdio.h>
int main()
{
    float calisma_saati,saatlik_ucret,maas,fazla_saat;
    printf("Calisma saatini giriniz: (Programdan cikmak icin -1 giriniz.)\n");
    scanf("%f",&calisma_saati);
    while(calisma_saati !=-1)
    {
        if(calisma_saati>40)
        {
            printf("Calisanin saatlik ucretini giriniz: \n");
            scanf("%f",&saatlik_ucret);
            maas=calisma_saati*saatlik_ucret;
            fazla_saat=calisma_saati-40;
            maas=maas+(fazla_saat*saatlik_ucret)/2;
            printf("Calisanin maasi: %f TL'dir. \n",maas);
            printf("Calisma saatini giriniz: (Programdan cikmak icin -1 giriniz.)\n");
            scanf("%f",&calisma_saati);
        }
        else
        {
        printf("Calisanin saatlik ucretini giriniz: \n");
        scanf("%f",&saatlik_ucret);
        maas=calisma_saati*saatlik_ucret;
        printf("Calisanin maasi: %f TL'dir. \n",maas);
        printf("Calisma saatini giriniz: (Programdan cikmak icin -1 giriniz.)\n");
        scanf("%f",&calisma_saati);
        }
    }
    printf("Cikis yapildi.\n");
}
