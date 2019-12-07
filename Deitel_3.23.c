#include <stdio.h>
int main()
{
    int sayi=1;
    printf("%d",sayi);
    sayi=++sayi;
    while(sayi<10)
    {
        printf("   %d",sayi);
        sayi++;
    }
}
