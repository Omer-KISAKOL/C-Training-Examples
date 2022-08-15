#include <stdio.h>

int asal_bul(int sayi){
	int i, asal=1;
	
	if(sayi == 0 || sayi == 1)
		return 1;
		
	else{
		for(i=2; i<sayi; i++){
			if(sayi % i == 0)
				asal = 0;
		}
		
		if(asal != 0)
			printf(	"\n%d",sayi);
		return asal_bul(sayi - 1);	
	}
}

void main(){
	int sayi;
	
	printf("Kaca kadar olan asal sayilar gosterilsin: ");
	scanf("%d",&sayi);
	
	asal_bul(sayi);
	
	getch();
}
