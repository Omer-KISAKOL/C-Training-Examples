#include <stdio.h>

void main(){
	int i;
	
	struct dg{int gun; int ay; int yil};
	struct bilgi{char isim; int boy; 
	struct dg tarih;};
	
	struct bilgi kisi[3] = {"Ahmet", 178, {12,05,1985}, "Veli", 168, {14,4,1980}, "Cenk", 176, {4,11,1983} };
	
	for(i=0; i<3; i++){
	printf( "Kayit no.: %d\n",( i + 1 ));
	printf("Ad: %s\n",kisi[i].isim);
	printf("Boy: %d\n",kisi[i].boy);
	printf("Dogum Tarihi:%d/%d/%d\n\n",kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil); 	
	}
				
	getch();
}
