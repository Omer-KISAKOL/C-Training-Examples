#include <stdio.h>

int topla(int n){
	if(n == 1)	
		return 1;
	else
		return ((2*n-1) + topla(n-1));
}

void main(){
	int sayi;
	
	printf("1 den itibaren kac adet tek sayinin toplanmasini istiyorsunuz: ");
	scanf("%d",&sayi);
	
	printf("1 den itibaren %d adet tek sayinin toplami: %2d", sayi, topla(sayi));
	
	getch();
}

