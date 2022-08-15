#include <stdio.h>

#define VUR printf ("Devam icin H.H. Tusa Bas... \n"); getch()
#define MAX 30 

typedef struct kayit { char plaka[12]; }KAYIT;

KAYIT oto [MAX] = {0};
void main (){
	int secim;

	while (1) {

		secim = menuden_sec(); 
		switch (secim) {
			case 1: kayit();   break;
			case 3: silme();   break;
			case 4: listele(); break;
			case 5: sakla();   break;
			case 6: yukle();   break;
			case 7: puts("Gorusuruz...\n"); 
					break;
		}
		break;
	} 
}

menuden_sec(){
	int i,secim1;
	printf("\t**** MENU ****\t \n\n1.ARAC GIRISI \n2.ARAC CIKISI  \n3.ARACLARI LiSTELE \n4.SAKLA \n5.YUKLE \n6.PROGRAM CIKISI \n ");
	printf ("\tSECiMiNiZ: ");
	scanf("%d",&secim1);
	return secim1;
}
	

kayit (){
	int indis;
	char kr;
	
	do{
		printf ("ARAC PLAKA: ");
		scanf("s", oto [indis].plaka);
		
		printf ("Baska giris yapacak misin? (E/H)\n");
		kr=getch();
	} 
	while (kr == 'E' || kr=='e');
}

listele (){
	int k; 
	for (k=0; k<MAX; k++)
		if (oto[k].plaka[0]) {
			goster (k); 
			VUR;
		}
}

silme(){
	int k, indis;
	char plaka[12]; 
	printf ("Silmek istediginiz aracin plakasý: "); 
	scanf("s", plaka);
	
	indis = varmi(plaka);
	if (indis==-1){
		printf("Boyle bir arac yok!\n"); 
		return;
	} 
	else {
	printf("Silindi\n"); 
	oto[indis].plaka[0]='\0';
	}
}

varmi(char plaka[]){
	int k;
	for (k=0; k<MAX; k++) 
		if (oto[k].plaka[0]) 
			if (!strcmp (oto[k].plaka,plaka))
			return k;

	return -1;
}



sakla (){
	FILE *di;
	int k;
	
	if( (di=fopen ("araclar.txt", "w"))==NULL){ 
	printf("Dosya Acilmadi... \n"); 
	return;
	}

	printf("Sakliyorum...\n"); 
	for (k=0; k<MAX; k++)
		if (oto[k].plaka[0])
			fwrite(&oto [k], sizeof (KAYIT), 1, di);
	fclose(di);
}

yukle(){
	FILE *di;
	unsigned int tane;
	int k, i;
	
	if((di=fopen ("araclar.txt", "r"))==NULL){ 
		printf("Dosya Acilamadi... \n"); 
		return;
	}
	
	fseek (di, 0, 2); 
	tane = ftell (di)/sizeof (KAYIT); 
	fseek (di, 0, 0);
	printf("Yukluyorum...\n"); 
	
	for (k=0; k<tane; k++) {
		i=ver (); 
		fread (&oto[i], sizeof (KAYIT), 1, di);
	}
	
	fclose (di);
}





