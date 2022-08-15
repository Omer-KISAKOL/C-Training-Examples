#include <stdio.h>

void main(){
	int *px, x = 5;
	char *py, y = "y";
	double *pz, z = 5.5;
	
	px = &x;
	py = &y;
	pz = &z;
	
	printf("O. adresler : px = %p\tpy = %p\tpz = %p\n",px,py,pz);
	
	px--;
	py--;
	pz--;
	
	printf("S. adresler : px = %p\tpy = %p\tpz = %p",px,py,pz);
	
	
	
}
