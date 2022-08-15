#include <stdio.h>

void main(){
	enum Boolean{
		false = 0,
		true = 1
	};
	
	enum Boolean dogruMi;
	
	dogruMi = true;
	
	if(dogruMi == true)
		printf("Dogru\n");
		
		
	getch();
}
