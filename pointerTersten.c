#include <stdio.h>
#include <conio.h>

void dizininTersi(int *pointer[]){
	int i;
	
	for(i=9; i>=0; i--){
		printf("%2d\n",*pointer[i]);
	}
}


void main(){
	int i, a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *ptra[10];
	
	for(i=0; i<10; i++)
		ptra[i] = &a[i];
	
	dizininTersi(ptra);
	
	getch();
}
