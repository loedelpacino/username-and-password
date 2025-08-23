#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char kelime[20];
char kelimeninTersi[20];
printf("Lutfen bir kelime giriniz:\n");
gets(kelime);

strcpy(kelimeninTersi, kelime);
strrev(kelimeninTersi);

if(strcmp(kelime,kelimeninTersi)==0){
printf("%s palindrom bir ifadedir.\n", kelime);
                                     }else{
                                           printf("%s Palindrom deildir.\n",kelime);
}

return 0;



}
