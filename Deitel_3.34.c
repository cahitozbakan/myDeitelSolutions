#include <stdio.h>

int main(){
int i=1;
int j=1;
int kenar;
printf("Kenar icin bir tamsayi giriniz: ");
scanf("%d",&kenar);
while(i<=kenar){
    j=1;
    while(j<=kenar){
        if(i==1||j==1||i==kenar||j==kenar)
            printf("*");
            else
            printf(" ");
            j++;
        }
    printf("\n");
    i++;
    }
}
