#include<stdio.h>
void main()
{
	int sayi;

	printf("BIR SAYI GIRINIZ : ");
	scanf("%d",&sayi);

	switch (sayi/10) {	
		case 9: printf("DOKSAN "); break;
		case 8: printf("SEKSEN "); break;
		case 7: printf("YETMIS "); break;
		case 6: printf("ALTMIS "); break;
		case 5: printf("ELLI "); break;
		case 4: printf("KIRK "); break;
		case 3: printf("OTUZ "); break;
		case 2: printf("YIRMI "); break;
		case 1: printf("ON "); break;
		case 0: printf(""); break;
		default: printf("HATA");
		
	}
	
	switch (sayi%10) {	 
		case 9: printf("DOKUZ"); break;
		case 8: printf("SEKIZ"); break;
		case 7: printf("YEDI"); break;
		case 6: printf("ALTI"); break;
		case 5: printf("BES"); break;
		case 4: printf("DORT"); break;
		case 3: printf("UC"); break;
		case 2: printf("IKI"); break;
		case 1: printf("BIR"); break;
//		case 0: printf("SIFIR"); break;
//		default: printf("HATA");
		
	}

}
