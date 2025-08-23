#include <stdio.h>
#include <stdlib.h>


int toplama(int sayi){

if(sayi !=0){

    return sayi+toplama(sayi-1);
}else{
return sayi;
}

}

int main()  {

int sayi;
printf("Lutfen bir sayi degeri giriniz:");
scanf("%d",&sayi);

if(sayi>=0){
printf("sonuc: %d", toplama(sayi));
}else{
printf("Lutfen pozitif bir sayi giriniz.");
}
return 0;
}
