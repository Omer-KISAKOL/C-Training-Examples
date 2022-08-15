#include <stdio.h>

int main(){
	FILE *file;
	int numbers[30];
	int i,j;
	
	file = fopen("fscanf.txt", "r");
	
	if(file==NULL){
	printf("Dosya acilamadi\n");
	return 1; 
	}
	
	else { 
	printf("Dosya acildi.\n");
	i = 0 ;
	
	while(!feof(file)){
	fscanf(file, "%d", &numbers[i]);
	i++;
	}
	
	printf("Okunan Sayilar: %d\n\n", i);
	
	for(j=0 ; j<i ; j++){
	printf("%d\n", numbers[j]);
	}
	
	fclose(file);
	return 1;
	}
}
