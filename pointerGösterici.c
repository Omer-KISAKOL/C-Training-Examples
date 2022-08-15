#include <stdio.h>

void main(){
	int  z, x = 5, y = 10; 
	int *adres;
	
	adres = &x;
	z = *adres;
	printf("x : %d\n",z);
	
	adres = &y;
	z = *adres;
	printf("y : %d",z);
	
	getch();
}
