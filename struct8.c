#include <stdio.h>

struct kisi{int sicilNo; char ad[10]; char soyad[10]; int yas; float maas; }k[2];

void main(){
	int i;
	
	for(i=0; i<2; i++){
		printf("%d. kisi için bilgileri giriniz: \n",(i+1));
	
		printf("\nSicil no=");
		scanf("%d",&k[i].sicilNo);
	
		printf("Ad=");
		scanf("%s",&k[i].ad);
	
		printf("Soyad=");
		scanf("%s",&k[i].soyad);
	
		printf("Yas=");
		scanf("%d",&k[i].yas);
	
		printf("Maas=");
		scanf("%f",&k[i].maas);		
	}
	
	for(i=0; i<2; i++){
		printf("\n%d %s %s %d %2f ",k[i].sicilNo, k[i].ad, k[i].soyad, k[i].yas, k[i].maas);
	}
	
	getch();
}



