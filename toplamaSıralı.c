#include <stdio.h>

int toplam(int sayi){
	if(sayi == 0)
		return 0;
	else
		return sayi + toplam(sayi-1);	
}


void main(){
	int sayi, deger;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	deger = toplam(sayi);
	printf("Girdi�iniz sayi de�erine kadar olan toplam: %d",deger);
	
	getch();
}


