#include <stdio.h>
#define N 3

int main(){
	int a[N][N], b[N][N], c[N][N];
	int i, j, k, toplam;
	
	printf("A matrisini giriniz: \n");
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			scanf("%d",&a[i][j]);
		
	printf("B matrisini giriniz: \n");
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			scanf("%d",&b[i][j]);
			
	printf("C matrisi: \n");
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			toplam = 0;
			for(k=0; k<N; k++)	
				toplam = toplam + a[i][k]*b[k][j];
			c[i][j] = toplam;
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

