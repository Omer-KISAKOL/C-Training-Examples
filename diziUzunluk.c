#include <stdio.h>

void main(){
	char dizi[40];
	int i = 0;
	
	printf("Dizi icerigini giriniz: ");
	gets(dizi);
	
	while(dizi[i]!='\0')
	i++;
	printf("Dizinin uzunlugu %d karakterdir.\n",i);
	
	getch();
}
