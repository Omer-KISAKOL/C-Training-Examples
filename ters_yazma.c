#include <stdio.h>

void main(){

	char metin[11];
	int i;

	printf("Metin giriniz : ");
	gets(metin);
		
	for(i=11; i>=0; i--){
		printf("%c",metin[i]);
	}
}
