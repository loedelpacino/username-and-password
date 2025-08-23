#include <stdio.h>
#include <stdlib.h>

void enBuyukSayi(int dizi[], int boyut) {
    int enBuyukDeger = dizi[0]; // �lk de�eri ba�lang�� olarak al�yoruz

    for (int i = 1; i < boyut; i++) { // Diziyi taray�p en b�y�k de�eri buluyoruz
        if (dizi[i] > enBuyukDeger) {
            enBuyukDeger = dizi[i];
        }
    }

    printf("En buyuk deger: %d\n", enBuyukDeger);
}

int main() {
    int sayi;

    printf("Kac dogal sayi girmek istiyorsunuz? ");
    scanf("%d", &sayi);

    int dizi[sayi]; // Kullan�c�dan al�nan say�ya g�re dizi boyutunu ayarl�yoruz

    printf("Lutfen %d adet sayi giriniz:\n", sayi);
    for (int i = 0; i < sayi; i++) {
        scanf("%d", &dizi[i]); // Dizinin elemanlar�n� kullan�c�dan al�yoruz
    }

    enBuyukSayi(dizi, sayi); // Fonksiyona diziyi ve boyutunu g�nderiyoruz

    return 0;
}
