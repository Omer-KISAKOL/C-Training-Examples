#include<stdio.h>

void main(){
	FILE *f;
	int buf;
	
	f = fopen("test.dat","rb");
	fread(&buf,sizeof(buf),1,f);
	printf("%d\n",buf);
	fclose(f);
	
	getch();
} 
