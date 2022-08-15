#include <stdio.h>

void main(){
	int i, j=0, k=0, N, l;
	 
	printf("Dizinizin eleman sayisini giriniz: ");
	scanf("%d",&N);
	
	int dizi[N];
	int dizi1[N];
	int dizi2[N];
	
	printf("\nDizinizin elemanlarini giriniz: ");
	for(i=0; i<N; i++)
		scanf("%2d",&dizi[i]);
		
	for(l=0; l<N; l++){
		if (dizi[l]>=0){
			dizi1[j] = dizi[l];
			j++;
		}
		
		else if (dizi[l]<0){
			dizi2[k] = dizi[l];
			k++;
		}
	}
	
	printf("\nDizinin pozitif elemanlari: ");
	for(i=0; i<j; i++){
		printf("%d",dizi1[i]);
		printf(",");
	}

	printf("\nDizinin negatif elemanlari: ");
	for(i=0; i<k; i++)	{
		printf("%d",dizi2[i]);
		printf(",");
	}
	
	getch();	
}
