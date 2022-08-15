#include <stdio.h>

void main(){
	
	char urunadi[50];
	float afiyat;
	int kdv, kar, indirim, i=1;
	
	while(1){
		printf("%d. Urun adini giriniz : ",i);
		scanf("%s",urunadi);
		
		printf("Ürün fiyatýný giriniz : ");
		scanf("%f",&afiyat);
		if(afiyat<=0) break;
		
		printf("KDV yüzdesini giriniz : ");
		scanf("%d",&kdv);
		
		printf("Kar yüzdesini giriniz : ");
		scanf("%d",&kar);
		
		printf("Indirim yüzdesini giriniz : ");
		scanf("%d",&indirim);
		
		float sfiyat = afiyat + afiyat*kdv/100 + afiyat*kar/100 - afiyat*indirim/100;
		
		printf("\nSatiþ fiyatý = %f \n\n",sfiyat);
		i++;
	}
getch();
}
