// dizi elemanlarýnýn  ort bulan pro
#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Elementlerin sayýsýný girin: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("Hata! bu sayý aralýðýnda olmalýdýr (1 ve 100).\n");
        printf("Numarayý tekrar girin: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Sayýyý gir: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf("Ortalama= %.2f", average);

    return 0;
}
