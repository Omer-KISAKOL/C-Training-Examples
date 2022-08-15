#include <stdio.h>

void main(){
	int i, fib[20]; 
	
	fib[0] = 1;
	fib[1] = 1;	
	
	for(i=2; i<19; i++)
		fib[i] = fib[i-1] + fib[i-2];
		
	for(i=0; i<19; i++)
		printf("%2d. fibonacci sayisi: %d\n",i ,fib[i]);
	
	getch();
}
