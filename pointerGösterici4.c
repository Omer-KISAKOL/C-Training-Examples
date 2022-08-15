#include <stdio.h>

void main(){
	int x = 10;
	int *p, **k, ***m;
	
	printf("x : %d\n",x);
	
	p = &x;
	k = &p;
	m = &k;
	
	***m = 100;
	
	printf("x : %d",x);
	
}

