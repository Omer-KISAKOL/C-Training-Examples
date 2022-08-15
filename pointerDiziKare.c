#include <stdio.h>

void kareAl(int dizi[], int boyut){
	int i;
	
	for(i=0; i<boyut; i++)
		dizi[i] = dizi[i]*dizi[i];
	
}

void main(){
	int liste[] = {1,2,3,4,5};
	int i;
	
	for(i=0; i<5; i++)
		printf("%d\t",liste[i]);
	printf("\n");
	
	kareAl(liste, 5);
	
	for(i=0; i<5; i++)
		printf("%d\t",liste[i]);
	
	getch();
}

