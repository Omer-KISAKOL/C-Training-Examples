#include <stdio.h>

int carp(x,y)
int x,y;
{
	int carp;
	carp = x*y;
	return carp;
}

void main(){
	int x,y;
	printf("Iki sayi giriniz:");
	scanf("%d%d",&x,&y);
	printf("Carpim = %d",carp(x,y));
	getch();
}

