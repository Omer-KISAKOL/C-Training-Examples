#include <stdio.h>

void main(){
	int *px, x = 10;
	
	px = &x;
	
	printf("x : %d\n",x);
	printf("px : %p\n\n",px);
	
	printf("&x : %p\n",&x);
	printf("*px : %d\n\n",*px);
	
	*px = 1;
	
	printf("x : %d\n",x);
	printf("*px : %d\n",*px);
	
	getch();	
}
