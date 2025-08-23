#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//STRLEN fonksiyonu

int main() {

/*
char isim[]= "irem nisa"
printf("%d", strlen(isim));
*/

/*char isim[15];
printf("Lutfen bir isim giriniz:\n");
scanf("%s", &isim);
//gets(isim);

int uzunluk = strlen(isim);
printf("\"%s\" uzunlugu : %d", isim,uzunluk);
*/
//örnek

char parola[50];
printf("Parolanizi giriniz:\n");
gets(parola);

if(strlen(parola)>=10){
    for(int i=0; i<strlen(parola);i++){
        printf("*");
    }

    printf(" Parola olusturuldu.");
}else{
printf("Parolaniz 10 karakterden kucuk olamaz.");
}
return 0;
}


