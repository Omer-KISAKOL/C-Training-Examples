#include <stdio.h>

int main(){
	FILE *file;
	char buf[97];
	
	file = fopen("textOmer.txt","r");
	fgets(buf,sizeof(buf),file);
	
	fclose(file);
	printf("%s\n",buf);
	
	getch();
}
