#include <stdio.h>

void main(){
	int i, min, max,x;
	int dizi[x];
	
	printf("\nKac sayý girilecegini belirtin: ");
	scanf("%d",&x);
	
	if(x!=-1){
	
		while(1){
		
			for(i=0;i<x;i++){
				printf("%2d. Dizi elemanini giriniz: ",(i+1));
				scanf("%d",&dizi[i]);
			}
	
			max = dizi[0];
			min = dizi[0];

			for(i=1; i < x; i++){
				if(min > dizi[i])
					min = dizi[i];
				if(max < dizi[i])
					max = dizi[i];
				}
			for(i=1; i < x; i++){
				if(dizi[i]==-1)
					exit(0);	
			}

			printf("Dizinin en buyuk elemani %d dir\n",max);
			printf("Dizinin en kucuk elemani %d dir\n",min);	
		}
	}
	else
		exit(0);
	getch();
}
