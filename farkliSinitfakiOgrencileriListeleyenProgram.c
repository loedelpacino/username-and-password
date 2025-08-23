#include <stdio.h>
#include <stdlib.h>

int main (){

 /*char ogrenci [4][50]={"irem","ekrem","meryem","asuman"};

 for (int i=0;i<4;i++)
    printf("%s\n",ogrenci[i]);
*/

char ogrenci [2][5][30];

for(int i=0;i<2;i++){
    for (int j=0;j<5;j++){
        printf("%d. siniftaki %d. kiþinin ismini giriniz:\n",i+1,j+1,ogrenci[i][j]+1);
        scanf("%s",ogrenci[i][j]);
}
}
for(int i=0;i<2;i++){
    for (int j=0;j<5;j++){
        printf("%d. siniftaki %d. kiþinin ismini giriniz: %s\n",i+1,j+1,ogrenci[i][j]);
}
}

 return 0;
}
