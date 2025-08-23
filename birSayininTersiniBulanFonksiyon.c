#include <stdio.h>
#include <stdlib.h>

int basamakSayisiniBul(int sayi){

int basamakSayisi=0;

if (sayi>0){
    do{
        basamakSayisi++;
        sayi=sayi/10;
    }while(sayi>0);
}

return basamakSayisi;
}

int tersineCevir(int sayi){

int basamakSayimiz=basamakSayisiniBul(sayi);
int dizi[basamakSayimiz];
int basamakSayisi=0;

do{
    basamakSayisi++;
    dizi[basamakSayisi-1]= sayi%10;
    sayi=sayi/10;
}while(sayi>0);

float sayininTersi=0;

for (int i=0; i<basamakSayimiz; i++){
    sayininTersi= sayininTersi+dizi[i]*pow(10,basamakSayimiz-1-i);
}
return sayininTersi;
}

int main(){

int sayi;
printf("Lutfen tersini almak istediginiz sayiyi girin:\n");
scanf("%d", &sayi);

printf("Basamak sayisi:%d\n", basamakSayisiniBul(sayi));
printf("Girdiginiz sayinin tersi: %d\n",tersineCevir(sayi));
return 0;
}
