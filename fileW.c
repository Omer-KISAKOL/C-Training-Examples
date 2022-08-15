#include <stdio.h>

void main(){
	FILE *file;
	
	file = fopen("textOmer.txt","w");
	
	if(file != NULL){
		fprintf(file,"Benim adim Omer.");
		fclose(file);
	}
	
	getch();
}
