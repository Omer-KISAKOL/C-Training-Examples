#include <stdio.h>
#include <conio.h>
#include <math.h>

float sayi,sonuc;

float Kare(float sayi){
	printf("Karesini almak istediðiniz sayýyý giriniz: ");
	scanf("%f",&sayi);
	sonuc = pow(sayi,2);
	printf("Sonuç : %f",sonuc);
}

float Karekok(float sayi){
	printf("Karekökünü almak istediðiniz sayýyý giriniz: ");
	scanf("%f",&sayi);
	sonuc = sqrt(sayi);
	printf("Sonuç : %f",sonuc);
}

float Log(float sayi){
	printf("Logaritmasýný almak istediðiniz sayýyý giriniz: ");
	scanf("%f",sayi);
	sonuc = log10(sayi);
	printf("Sonuç : %f",sonuc);
}

void Cikis(){
	system("EXIT");
}

void main(){
	int secim;
	float _sayi,sonuc;
	printf("Yapmak istediginiz islemi seciniz :\n\n 1.Karesini bul\n 2.Karekokunu bul\n 3.Log10 bul\n 4.Cikis\n");
	scanf("%d",&secim);
	
	if(secim == 1)
		Kare(_sayi);
	
	if(secim == 2)
		Karekok(_sayi);
		
	if(secim == 3)
		Log(_sayi);
		
	if(secim == 4)
		Cikis();
		
	getch();	
}













