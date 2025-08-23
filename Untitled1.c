#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//string compare
int main (){

/* char meyve1[]="Kiraz";
char meyve2[]="Muz";

strcmp(meyve1,meyve2);

if (strcmp(meyve1,meyve2)==0){

    printf("Bu kelimeler birbiriyle alfabetik olarak eþit.\n");

}else if(strcmp(meyve1,meyve2)<0){
printf("%s, %s'ten alfabetik olarak önce gelir.\n",meyve1,meyve2);
}else{
printf("%s, %s'ten alfabetik olarak önce gelir.\n",meyve2,meyve1);
}
*/

char kullaniciAdi[20];
char parola[20];
char gercekKullaniciAdi[20]="irem";
char gercekParola[20]="123asd";

printf("Lutfen kullanici adi ve sifre giriniz:\n");


scanf("%s %s",&kullaniciAdi, parola);

system("cls");
if(strcmp(kullaniciAdi,gercekKullaniciAdi)==0 && strcmp(parola,gercekParola)==0){

    printf("Hos geldiniz!");
}else if(strcmp(kullaniciAdi,gercekKullaniciAdi)!=0 || strcmp(parola,gercekParola)!=0){
printf("Kullanici adi veya sifre yanlis!");
}else{
printf("Yanlis karakter, tekrar deneyiniz!");
}

return 0;
}
