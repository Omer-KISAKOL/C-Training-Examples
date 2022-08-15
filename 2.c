#include <stdio.h>

int toplam(a,b,c)
int a,b,c;
{
	int toplam;
	toplam = a+b+c;
	return(toplam);
}

float ortalama(a,b,c)
int a,b,c;
{
	float ortalama;
	ortalama = (float)toplam(a,b,c)/3;
	return ortalama;
}

void main(){
	int k,l,m;
	printf("Uc tane sayi girin: ");
	scanf("%d%d%d",&k,&l,&m);
	printf("Toplam deger: %d\nOrtalama deger: %f",toplam(k,l,m),ortalama(k,l,m));
	getch();
}	
