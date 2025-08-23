#include <stdio.h>
#include <stdlib.h>

int main (){

int dizi1 [3][4];
int dizi2 [3][4];

//burada kullanici ciktisi aliyoruz
for (int i=0; i<3;i++)
    for (int j=0;j<4;j++){
    printf("%d. satirdaki ve %d. sutundaki elemani giriniz:\n",i+1, j+1);
    scanf("%d",&dizi1[i][j]);
    }

   system("CLS"); // bu ekran gecmisini temizler.
    printf("Simdi ikinci matris icin veri alinacak:\n");
for (int i=0; i<3;i++)
    for (int j=0;j<4;j++){
    printf("%d. satirdaki ve %d. sutundaki elemani giriniz:\n",i+1, j+1);
    scanf("%d",&dizi2[i][j]);
    }
system("CLS");
printf("Ýlk matris:\n");
for (int i=0;i<3;i++){
     for(int j=0;j<4;j++)
     printf("%d ", dizi1 [i][j]);
printf("\n");
     }
     printf("\n");

printf("Ýkinci matris:\n");
     for (int i=0;i<3;i++){
     for(int j=0;j<4;j++)
     printf("%d ", dizi2 [i][j]);
printf("\n");
     }
printf("\n");

printf("Matrisler toplami:\n");
int toplam [3][4];

     for (int i=0;i<3;i++)
        for(int j=0;j<4;j++)
        toplam [i][j]=dizi1[i][j] +dizi2[i][j];

        for (int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            printf("%d ", toplam [i][j]);
        printf("\n");}

return 0;
}


