#include <stdio.h>

void main(){
	
	struct{int yil; int ay; int gun}dogumGunu;
	
	printf("Dogum gununuzu G/A/Y olarak giriniz : ");
	scanf("%d/%d/%d",&dogumGunu.gun, &dogumGunu.ay, &dogumGunu.yil);
	
	printf("Dogum gununuz: %d/%d/%d\n",dogumGunu.gun, dogumGunu.ay, dogumGunu.yil);
	
	getch();
}
