#include<stdio.h>

struct{char name[100];int age;}p;

void main(){
	FILE *f;
	
	strcpy(p.name,"John");
	p.age = 97;
	f = fopen("test.dat","wb");
	fwrite(&p,1,sizeof(p),f);
	
	fclose(f);
	getch();
}
