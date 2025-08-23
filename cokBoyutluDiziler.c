#include <stdio.h>
#include <stdlib.h>

int main ()
{
/*
int cokBoyutluDizi [3][2]= {12,43,34,11,32,57};
int cokBoyutluDizi2 [3][2]= {{12,43},{34,11},{32,57}};

printf("%d,\n", cokBoyutluDizi2[0][0]);
printf("%d,\n", cokBoyutluDizi2[0][1]);
printf("%d,\n", cokBoyutluDizi2[1][0]);
printf("%d,\n", cokBoyutluDizi2[1][1]);
printf("%d,\n", cokBoyutluDizi2[2][0]);
printf("%d,\n", cokBoyutluDizi2[2][1]);

for(int i =0; i<3; i++){
    for(int j =0; j<2; j++){
        printf("%d ", cokBoyutluDizi2[i][j]);
    }
    printf("\n");
}
*/

int satir,sutun;
printf("Kac satir istiyorsunuz:  \n");
scanf("%d", &satir);
printf("Kac sutun istiyorsunuz:  \n");
scanf("%d", &sutun);

int cbd[satir][sutun];

for(int a=0;a<satir; a++){
    for(int b=0;b<sutun;b++){
            printf("%d. satirdaki ve %d. sutundaki elemani giriniz:  \n",a+1,b+1);
        scanf("%d",&cbd[a][b]);
    }

}

for(int a=0;a<satir;a++){
    for(int b=0;b<sutun;b++){
        printf("%d ",cbd[a][b]);
    }
    printf(" \n");
}
return 0;
}
