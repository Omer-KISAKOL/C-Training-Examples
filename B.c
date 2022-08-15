#include <stdio.h>

float B(x,y)
int x,y;
{
	float B;
	B = x/y;
	return B;
}

void main(){
	int x,y;
	printf("yaz lan: ");
	scanf("%d%d",&x,&y);
	printf("al len: %3.f",B(x,y));
	getch();
}
