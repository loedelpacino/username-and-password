#include <stdio.h>
#include <stdlib.h>

void isimleriListele (char isimListesi [][30],int boyut){

for (int i=0;i<boyut;i++)
printf("%s\n",isimListesi[i]);

}



int main(){

char isimler [5][30]={"Haydar","Ayse","Mert","Sertap","Veysel"};

printf("Calisan isimleri:\n");
isimleriListele(isimler,5);

return 0;
}
