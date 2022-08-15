#include<stdio.h>

void main(){
	
	char ad[50], soyad[50];
	int i=1, vize, final;

	while(1){
		printf("%d. ",i);
		
		printf("Ad Soyad giriniz : ");
		scanf("%s %s",ad,soyad);
		
		printf("  Vize : ");
		scanf("%d",&vize);
		
		if(vize<0) break;
	
		printf("  Final : ");
		scanf("%d",&final);
		
		if(final<0) break;
		
		float ort = vize*0.3 + final*0.7;
		
		printf("%s %s = %f \n",ad,soyad,ort);
		
		i++;
	}
	
getch();
}
