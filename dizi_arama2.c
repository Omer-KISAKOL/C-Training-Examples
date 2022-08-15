#include <stdio.h>

void main(){
	
	char c,dizi[10];
	int i,k=0;
	
	printf("Dizi rakamlarýný giriniz. (en fazla 10 tane) : ");
	gets(dizi);
	printf("Dizide aramak istediðiniz akamý giriniz. (1 tane) : ");
	scanf("%c",&c);
	
	for(i=0; i<10; i++)
 		if(c == dizi[i])
 			k++;
 		if(k == 0)
 			printf("Aradiðiniz rakam bulunamidi.");
 		else
 			printf("Dizide %c rakamindan %d tane vardir.",c,k);
 	getch();
}
