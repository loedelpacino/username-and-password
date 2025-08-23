#include <stdio.h>
#include <stdlib.h>

int mukemmelSayiMi(int sayi){

int toplam=1;

for(int carpan=2;carpan<=sayi/2;carpan++){
    if(sayi%carpan==0){
        toplam+=carpan;
    }

}
if (toplam==sayi){
    return 1;//mukemmel sayidir.
}else{
return 0;//mukemmel sayý deðildir.
}
}


int main(){

int kullaniciGirdisi;
printf("Mukemmel olup olmadigini kontrol etmek istediginiz sayiyi giriniz:\n");
scanf("%d",&kullaniciGirdisi);

if (mukemmelSayiMi(kullaniciGirdisi)==1){
printf("%d bir mukemmel sayidir.",kullaniciGirdisi);}
else {
    printf("%d bir mukemmel sayi degildir.",kullaniciGirdisi);
}
return 0;
}
