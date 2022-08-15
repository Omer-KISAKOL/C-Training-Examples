#include <stdio.h>

float diziOrt(int []);

void main(){
	int i, *ptr, dizi[10];
	
	printf("\nDizinizi giriniz: \n");
	for(i=0; i<10; i++)
		scanf("%d",&dizi[i]);
	
	
	ptr = dizi;
	
	printf("Ortalama: %.2f",diziOrt(ptr));
	
	getch();
}

float diziOrt(int *ptr){
	int i;
	float toplam = 0, ort;
	
	for(i=0; i<10; i++){
		printf("%2d. eleman: %d\n",(i+1),*ptr);
		toplam += *(ptr);
		ptr++;
	}

	ort = toplam/10.0;
	
}
