#include <stdio.h>
#include <stdlib.h>

enum hafta{Pazartesi=1,Sali,Carsamba,Persembe,Cuma,Cumartesi,Pazar};
enum aylar{Mart=3,Haziran=6,Eylul=9,Aralik=12};
enum mevsim{ilkbahar=1,yaz,sonbahar,kis};
enum ogrenciKaydi{aktif,donmus,silinmis};

int main (){

/*enum mevsim mevsimler;
mevsimler=sonbahar;
printf("%d",sonbahar);
*/
// böyle de atanabilir.

enum ogrenciKaydi kayit;
kayit=aktif;

if (kayit==0){
    printf("Ogrenci kaydi aktiftir.");
}else if(kayit==1){
printf("Ogrenci kaydi dondurulmustur.");
}else{
printf("Ogrenci kaydi silinmistir.");
}

return 0;
}
