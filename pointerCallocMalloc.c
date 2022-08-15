#include <stdio.h>
#include <stdlib.h>

void main(){
	int i, elemanSayisi, *dizi;
	
	printf("Eleman sayisini giriniz : ");
	scanf("%d",&elemanSayisi);
	
	dizi = calloc(elemanSayisi, sizeof(int));
//	dizi = malloc(elemanSayisi*sizeof(int));
	
	for(i=0; i<elemanSayisi; i++)
		printf("%d\n",dizi[i]);
	
	free(dizi);
	
	getch();
}

