#include <stdio.h>

void main(){
	int *px;
	int x = 5;
	px = &x;
	
	printf("x = %d\n",x);
	printf("x'in adresi = %p\n",&x);
	printf("px = %p\n",px);
	printf("px'in adresi = %p\n",&px);
	printf("px'in degeri = %d\n",*px);

	getch();
}
