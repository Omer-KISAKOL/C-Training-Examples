#include<stdio.h>

void main(){
	FILE *f;
	int buf;
	
	f = fopen("test.dat","wb");
	buf = 100;
	fwrite(&buf, sizeof(buf),1,f);
	fclose(f);	
	
	getch();
} 
