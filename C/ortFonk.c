//Tamsay� dizisinin ortalamas�n� hesaplayan fonk.
#include <stdio.h>
void ortHesapla(int dizi[], int n); // dizi boyutuna g�re parametreli fonksiyon
int n, i;
int dizi[100];
float toplam = 0.0;  
float ortalama;

int main(){
    printf("Dizi Boyutunu Girin: ");
    scanf("%d", &n);
    while(n > 100 || n <= 0){
        printf("1-100 arasi bir sayi olmali.\n");
        printf("Tekrar Girin: ");
        scanf("%d", &n);
    }
    ortHesapla(dizi, n); // Ortalama Fonksiyonunun �a�r�lmas�
    return 0;
}
 
void ortHesapla(int dizi[], int n ){  // Ortalama Fonksiyonu
    for(i=0; i<n; ++i){ //  d�ng�yle boyut kadar ortalamas�n�n al�nmas�
        printf("%d. Say�y� Gir: ", i+1);
        scanf("%d", &dizi[i]);
        toplam += dizi[i];
    }
    ortalama = (float) toplam / n; 
    printf("Ortalama = %f", ortalama);    
}
