#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

char ilceBilgileri[20]= "41900 Derince";
char postaKodu[6];

//strcpy(ulke,mekan);
strncpy(postaKodu,ilceBilgileri,5);//yalnýza ilk 6 karakteri basar.
printf("Bu ulkede bulunanlar: %s", postaKodu);

return 0;
}
