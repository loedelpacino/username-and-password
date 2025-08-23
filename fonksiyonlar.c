#include <stdio.h>
#include <stdlib.h>

void takimlar(){

printf("Fenerbahce\n");
printf("Galatasaray\n");
printf("Besiktas\n");
printf("Kocaelispor\n");


}

int sayininIkiKati(int sayi){

printf("%d", sayi*2);
return sayi*2;
}

float kareKok(float sayi){

return sqrt(sayi);
}
char ilkHarfiniBas(char dizi[]){

return dizi[0];
}

double karesiniAl(double sayi){

return sayi*sayi;

}
int sifirdanBuyukMu(int sayi){

if (sayi>0){
    return 0;
}else{
return 1;
}

}

main (){

int sayi;
printf("Lutfen pozitif mi yoksa negatif mi oldugunu ogrenmek istediginiz sayiyi giriniz:\n");
scanf("%d",&sayi);
system("CLS");
if (sifirdanBuyukMu(sayi)==0){
    printf("Sayi pozitif.");
}else{
printf("Sayi negatif.");
}

return 0;
}
