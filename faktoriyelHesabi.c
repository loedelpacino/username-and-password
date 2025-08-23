#include <stdio.h>
#include <stdlib.h>


int faktoriyel (int sayi){

if (sayi >=1){
    return sayi * faktoriyel(sayi-1);
}else{
return 1;
}


}


int main(){

int sayi;
while (1){

    printf("Hesaplanacak faktoriyel sayiyi giriniz:\n");
scanf("%d",&sayi);

printf("Sonuc: %d! = %d\n", sayi,faktoriyel(sayi) );

}

return 0;
}
