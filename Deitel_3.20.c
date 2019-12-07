#include <stdio.h>
int main() {
    float anapara,oran,gun,faiz;
    printf("Anaparayi giriniz: ( Cikmak icin -1 giriniz. )\n");
    scanf("%f",&anapara);
    while(anapara !=-1){
        printf("Faiz oranini giriniz: \n");
        scanf("%f",&oran);
        printf("Kac gunluk faiz: \n");
        scanf("%f",&gun);
        faiz = anapara*oran*(gun/365);
        printf("Faiz ucreti: %f TL'dir.\n",faiz);
        printf("Anaparayi giriniz: ( Cikmak icin -1 giriniz. )\n");
        scanf("%f",&anapara);
    }
    printf("Cikis yapildi.");
}
