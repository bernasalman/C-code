// dizi elemanlar�n�n  ort bulan pro
#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Elementlerin say�s�n� girin: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("Hata! bu say� aral���nda olmal�d�r (1 ve 100).\n");
        printf("Numaray� tekrar girin: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Say�y� gir: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf("Ortalama= %.2f", average);

    return 0;
}
