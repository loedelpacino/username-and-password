#include <stdio.h>
#include <stdlib.h>


float celcius (float fahrenheit){


return (fahrenheit-32)/1.8;
}

float fahrenheit(float celcius){


return celcius*1.8+32;
}


int main(){

char kullaniciGirdisi;

printf("Kullanacaginiz olcegi seciniz (fahrenheit:f, celcius:c):\n");
scanf("%c",&kullaniciGirdisi);

if(kullaniciGirdisi== 'f' || kullaniciGirdisi== 'F'){
    float deger;
    printf("Donusturmek istediginiz degeri giriniz:\n");
    scanf("%f",&deger);
    system("CLS");
    printf("%f fahrenheit derecesi, %f celcius derecedir.\n",deger,celcius(deger));

}else if(kullaniciGirdisi== 'c' || kullaniciGirdisi== 'C'){
float deger;
printf("Donusturmek istediginiz degeri giriniz:\n");
scanf("%f",&deger);
system("CLS");
printf("%f celcius derecesi, %f fahrenheit derecesine esittir.\n",deger,fahrenheit(deger));
}else{
printf("Lutfen gecerli bir karakter giriniz!");
}

return 0;
}
