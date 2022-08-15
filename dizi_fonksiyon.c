#include <stdio.h>

void elemanlar(int gdizi[5]){
	int i;
	for(i=0; i<5; i++)
		printf("%d\n",gdizi[i]);
		
	return 0;
}

void main(){
	int dizi[5] = {1,2,3,4,5};
	elemanlar(dizi);
	
	return 0;
} 
