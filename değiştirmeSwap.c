#include <stdio.h>

void swap(int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void main(){
	int a = 123, b = 321;
	
	printf("a : %d\tb : %d\n",a,b);
	
	swap(&a,&b);
	printf("a : %d\tb : %d",a,b);
	
	getch();
}

