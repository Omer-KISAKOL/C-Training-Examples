#include <stdio.h>

void main(){
	int dizi[10] = {5,6,4,3,1,2,9,7,8,0};
	int i, j, temp;
	
	for(i=0; i<10; i++){
		for(j=9; j>i; j--){
			if(dizi[j]<dizi[j-1]){
				temp = dizi[j-1];
				dizi[j-1] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	
	for(i=0; i<10; i++)
		printf("%3d",dizi[i]);
		
	printf("\n");
	system("PAUSE");
	
	getch();	
}
