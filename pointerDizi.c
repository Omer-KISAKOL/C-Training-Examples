#include <stdio.h>

void main(){
	int dizi[2][2] = {{1,2},{3,4}};
	int i, j,*ptr;
	
	ptr = dizi;
	
	for(i=0; i<4; i++)
		printf("%d\t",*(ptr + i));

	getch();
}
