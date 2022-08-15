#include<stdio.h>
#include<stdlib.h>

	int main (){
		int a,b,sayi;
		printf("bir sayi giriniz");	
		scanf("%d",&sayi);
		for(a=1;a<=sayi;a++){
			for(b=1;b<=sayi-a;b++){
				printf(" ");
			}
			for(b=1;b<=2*a-1;b++){
				printf("*");
				
			}
			
			printf("\n");
									
		}
		for(a=1;a<=sayi;a++){
			for(b=1;b<=a;b++){
				printf(" ");
				
			}
			for(b=1;b<=(2*sayi-2*a-1);b++){
				printf("*");
				
			}
			printf("\n");
		}
		
	}
