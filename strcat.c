#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

char mesaj[100] ="Merhaba, ";
char isim[50];

printf("Adinizi girin: ");
scanf("%s", isim);

// Kullan�c�n�n ad�n� mesaja ekle
strcat(mesaj, isim);
strcat(mesaj, "! Hos geldiniz!");

printf("%s\n",mesaj);
return 0;
}
