#include <stdio.h>
#include <stdlib.h>

int tekCiftKontrol(int sayi){

if (sayi%2 ==0){
    printf("Girdiginiz sayi bir cift sayidir.");
}else{
printf("Girdiginiz sayi bir tek sayidir.");
}


}



int main(){

int kullaniciGirdisi;

printf("Lutfen tek mi cift mi oldugunu ogrenmek istediginiz sayiyi giriniz:\n");
scanf("%d",&kullaniciGirdisi);

tekCiftKontrol(kullaniciGirdisi);


return 0;
}
