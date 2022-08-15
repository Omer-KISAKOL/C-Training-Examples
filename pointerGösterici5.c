#include <stdio.h>

void main(){
	int dizi[5] = {1,2,3,4,5};
	int i, *ptr;
	
	ptr = dizi;
	
	for(i=0; i<5; i++)
		printf("%d. dizi elemani : %d\n",(i+1),(*ptr + i));
	
	getch();
}

