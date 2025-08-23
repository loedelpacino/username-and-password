#include <stdio.h>
#include<stdlib.h>

int asalMi(int sayi){

for(int carpan=2;carpan<=sayi/2;carpan++){
    if(sayi%carpan==0){
        printf("Bu sayi asal degildir.");
        return 0;
    }else{
    printf("Bu sayi asaldir");
    return 1;
    }

}
}


int main(){

int kullaniciGirdisi;
printf("Lutfen asal olup olmadigini ogrenmek istediginz sayiyi giriniz:\n");
scanf("%d",&kullaniciGirdisi);
asalMi(kullaniciGirdisi);

return 0;
}
