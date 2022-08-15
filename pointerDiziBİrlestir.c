#include <stdio.h>
#include <stdlib.h>

int *diziBirlestirme(int [], int, int [], int);

void main(){
	int i, *ptr;
	int liste1[5] = {1,2,3,4,5};
	int liste2[7] = {6,7,8,9,10,11,12};
	
	ptr = diziBirlestirme(liste1, 5, liste2, 7);
	
	for(i=0; i<12; i++)
		printf("%2d ",ptr[i]);
	printf("\n");
	
	getch();
}

int *diziBirlestirme(int dizi1[], int boyut1, int dizi2[], int boyut2){
	int i, j;
	int *sonuc = calloc(boyut1 + boyut2, sizeof(int));
	
	for(i=0; i<5; i++)
		sonuc[i] = dizi1[i];
	
	for(j=0; j<7; i++, j++)
		sonuc[i] = dizi2[j];
	
	return sonuc;
	
	free(sonuc);
}

