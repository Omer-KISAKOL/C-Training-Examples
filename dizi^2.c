#include <stdio.h>

void main(){
	
	int dizi1[20], dizi2[20];
	int i;
	
	for(i=0; i<10; i++){
		printf("Dizinin %2d. elemanini giriniz : ",i+1);
		scanf("%d",&dizi1[i]); 
	}
	printf("\nDizi1     Dizi2\n");
	printf("-----     -----\n");
	
	for(i=0; i<10; i++){
		dizi2[i] = dizi1[i]*dizi1[i];
		printf("%3d %10d\n",dizi1[i],dizi2[i]);
	}
getch();
}

