#include <stdio.h>

int faktor(int n){
	if (n == 0)
		return 1;
	else
		return n*faktor(n-1);
}

void main(){
	int n;
	
	printf("Faktoriyeli hesaplanacak sayiyi giriniz: ");
	scanf("%d",&n);
	
	printf("\n %d sayisinin faktoriyeli = %d\n",n,faktor(n));
	
	getch();
}
