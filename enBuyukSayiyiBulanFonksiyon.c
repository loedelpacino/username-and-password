#include <stdio.h>
#include <stdlib.h>

void enBuyukSayi(int dizi[], int boyut) {
    int enBuyukDeger = dizi[0]; // Ýlk deðeri baþlangýç olarak alýyoruz

    for (int i = 1; i < boyut; i++) { // Diziyi tarayýp en büyük deðeri buluyoruz
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

    int dizi[sayi]; // Kullanýcýdan alýnan sayýya göre dizi boyutunu ayarlýyoruz

    printf("Lutfen %d adet sayi giriniz:\n", sayi);
    for (int i = 0; i < sayi; i++) {
        scanf("%d", &dizi[i]); // Dizinin elemanlarýný kullanýcýdan alýyoruz
    }

    enBuyukSayi(dizi, sayi); // Fonksiyona diziyi ve boyutunu gönderiyoruz

    return 0;
}
