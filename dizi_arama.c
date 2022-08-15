#include <stdio.h>
#include <conio.h>

void main(){	

	char c, dizi[30];
	int i,k=0;
	
	puts("30 karakter uzunlugunda bir dizi giriniz:");
	gets(dizi);
	puts("Aranacak karakteri giriniz : ");
	scanf("%c",&c);
	
	for(i = 0; i < 30; i++)
 		  if( c == dizi[i]) k++;
  	  	  if(k == 0) printf("%c karakteri dizide bulunamadi", c);
		  else printf("%c karakteri dizide %d kere bulundu", c, k);
	getch();
}
