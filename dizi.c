#include <stdio.h>

void main(){
	
	float dizi[8];
	int i, ort_ust=0, ort_alt=0;
	float  toplam=0;
	
	for(i=0;i<8;i++){
		printf("%2d. Dizi elemanini giriniz: ",(i+1));
		scanf("%f",&dizi[i]);
		toplam += dizi[i];
	}
	
	float ortalama = toplam/8;
	
	for(i=0;i<8;i++){
		if(dizi[i]<ortalama)
		ort_alt++;
		else if(dizi[i]>ortalama)
		ort_ust++;
	}
	
	printf("Toplam: %2f \nOrtalama: %2f \nOrtalamanin ustunde %d deger vardir. \nOrtalamanin altinda %d deger vardir",toplam,ortalama,ort_ust,ort_alt);
	
	getch();
}
