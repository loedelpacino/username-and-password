#include<stdio.h>
#include<stdlib.h>

int notSistemi(int ortalama){

if(ortalama>=90){
        printf("%d: AA (4)\n", ortalama);
    return 4;
}else if(ortalama>=80 && ortalama<90){
    printf("%d: BB (3)\n", ortalama);
return 3;
}else if(ortalama>=70 && ortalama<80){
    printf("%d: CC (2)\n", ortalama);
return 2;
}else if(ortalama>=60 && ortalama<70){
    printf("%d: DD (1)\n", ortalama);
return 1;
}else if(ortalama<60 &&ortalama>=0){
printf("%d: FF (0)\n", ortalama);
return 0;
}else{
printf("Gecersiz not: %d\n", ortalama);
return -1;
}

}


int main(){
printf("Lutfen notlandýrmak istediginiz ogrencilerin notlarini giriniz:\n");
int kullaniciGirdisi[5];//notlari saklamak icin dizi
for (int i=0;i<5;i++){
    scanf("%d",&kullaniciGirdisi[i]);

}
printf("Notlari derecelendirilmesi:\n");
for(int i=0;i<5;i++){
    notSistemi(kullaniciGirdisi[i]);
}

return 0;
}
