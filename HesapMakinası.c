#include <stdio.h>
#include <conio.h>
#include <math.h>

float sonuc, sayi1, sayi2;

float Toplama(float sayi1, float sayi2){
	sonuc = sayi1 + sayi2;
	return sonuc;
}

float Cikarma(float sayi1, float sayi2){
	sonuc = sayi1 - sayi2;
	return sonuc;
}

float Carpma(float sayi1, float sayi2){
	sonuc = sayi1 * sayi2;
	return sonuc;
}

float Bolme(float sayi1, float sayi2){
	sonuc = sayi1 / sayi2;
	return sonuc;
}

void Cikis(){
system("EXIT");
}

void main(){
	int secim;
	float sayi;
	printf("Yapmak istediginiz islemi seciniz : \n1.Toplama \n2.Cikarma \n3.Carpma \n4.Bolme \n5.C�k�s \nSeciminiz : ");

scanf("%d",&secim);
printf("Seciminiz: %d\n",secim);

if(secim == 1){
	printf("A+B i�in A de�erini giriniz: ");
	scanf("%f",&sayi1);
	printf("B de�erini giriniz: ");
	scanf("%f",&sayi2);
	Toplama(sayi1,sayi2);
	printf("Sonuc: %f",sonuc);
}

if(secim == 2){
	printf("A-B i�in A de�erini giriniz: ");
	scanf("%f",&sayi1);
	printf("B de�erini giriniz: ");
	scanf("%f",&sayi2);
	Cikarma(sayi1,sayi2);
	printf("Sonuc: %f",sonuc);
}

if(secim == 3){
	printf("A*B i�in A de�erini giriniz: ");
	scanf("%f",&sayi1);
	printf("B de�erini giriniz: ");
	scanf("%f",&sayi2);
	Carpma(sayi1,sayi2);
	printf("Sonu�: %f",sonuc);
}

if(secim == 4){
	printf("A/B i�in A de�erini giriniz: ");
	scanf("%f",&sayi1);
	printf("B de�erini giriniz: ");
	scanf("%f",&sayi2);
	Bolme(sayi1,sayi2);
	printf("Sonu�: %f",sonuc);
}

if(secim == 5){
	Cikis();
}

getch();
}








