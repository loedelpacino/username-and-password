#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

char kelime [20];
printf("Lutfen bir kelime giriniz:\n");
gets(kelime);

/*strlwr(kelime);
printf("bu kelimenin kucuk harfle yazilmis hali: %s \n",kelime);
*/

strupr(kelime);
printf("Bu kelimenin buyuk harflerle yazilmis hali: %s\n",kelime);
return 0;
}
