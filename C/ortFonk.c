//Tamsayý dizisinin ortalamasýný hesaplayan fonk.
#include <stdio.h>
void ortHesapla(int dizi[], int n); // dizi boyutuna göre parametreli fonksiyon
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
    ortHesapla(dizi, n); // Ortalama Fonksiyonunun çaðrýlmasý
    return 0;
}
 
void ortHesapla(int dizi[], int n ){  // Ortalama Fonksiyonu
    for(i=0; i<n; ++i){ //  döngüyle boyut kadar ortalamasýnýn alýnmasý
        printf("%d. Sayýyý Gir: ", i+1);
        scanf("%d", &dizi[i]);
        toplam += dizi[i];
    }
    ortalama = (float) toplam / n; 
    printf("Ortalama = %f", ortalama);    
}
