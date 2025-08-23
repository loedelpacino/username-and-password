#include <stdio.h>
#include  <stdlib.h>

int ebob(sayi1,sayi2){

if(sayi2!=0){
    return ebob(sayi2,sayi1%sayi2);
}else{
return sayi1;
}

}


int main(){

int sayi1,sayi2;

printf("Birinci sayi:\n");
scanf("%d", &sayi1);
printf("Ikinci sayi:\n");
scanf("%d",&sayi2);

printf("EBOB: %d\n", ebob(sayi1,sayi2));

return 0;
}
