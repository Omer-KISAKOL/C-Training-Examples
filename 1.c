#include <stdio.h>

int topla(x,y)
int x,y;
{
	int toplam;
	toplam = x+y;
	return toplam;
}

void main(){
	int a,b,z;
	printf("iki sayý girin: ");
	scanf("%d%d",&a,&b);
	z = topla(a,b);
	printf("toplam = %d",z);
	getch();
}
