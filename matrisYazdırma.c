#include <stdio.h>

void main(){
	int dizi[3][3] = {7,8,9,4,5,6,1,2,3};
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%3d",dizi[i][j]);
		}
		printf("\n");
	}
}
