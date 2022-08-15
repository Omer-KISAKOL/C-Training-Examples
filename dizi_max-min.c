#include <stdio.h>

void main(){
	int dizi[5];
	int i, min, max;
	
	for(i=0;i<5;i++){
		printf("%2d. Dizi elemanini giriniz: ",(i+1));
		scanf("%d",&dizi[i]);
	} 
	
	max = dizi[0];
	min = dizi[0];
	
	for(i=1; i < 5; i++){
		if(min > dizi[i])
			min = dizi[i];
		if(max < dizi[i])
			max = dizi[i];
	}
	
	printf("Dizinin en buyuk elemani %d'dir\n",max);
	printf("Dizinin en kucuk elemani %d'dir",min);

	getch();
}
