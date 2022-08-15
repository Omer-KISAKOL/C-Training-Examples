#include<stdio.h>
#include<conio.h>
#include<Math.h>

int aci;
double sonuc; 

double Sinus(){
	printf("Sinüsünü bulmak istediðiniz açýyý giriniz : ");
	scanf("%d",&aci);
	sonuc = sin((aci*3.14159265)/180);
	printf("Sonuc: %lf", sonuc);
}
double Kosinus(){
	printf("Kosinüsünü bulmak istediginiz sayiyi giriniz :");
	scanf("%d",&aci);
	sonuc = cos((aci*3.14159265)/180);
	printf("Sonuc: %lf", sonuc);
}
double Tanjant(){
	printf("Tanjantini bulmak istediginiz sayiyi giriniz : ");
	scanf("%d",&aci);
	sonuc = tan((aci*3.14159265)/180);
	printf("Sonuc: %lf", sonuc);
}

void Cikis(){
	system ("EXIT"); 
}

main(){
	int secim, aci, sonuc;
	
	printf("1.Sinusunu bul \n2.Kosinusunu bul \n3.Tanjantini bul \n4.Cikis\n");
	printf("Yapmak istediginiz islemi seciniz : ");
	scanf("%d",&secim);
	printf("Seciminiz: %d\n",secim);
	
	if(secim == 1)
	Sinus();
	
	if(secim == 2)
	Kosinus();
	
	if(secim == 3)
	Tanjant();
	
	if(secim == 4)
	Cikis();
	
	getch();
}
