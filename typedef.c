#include<stdio.h>

void main() {
	enum boolean { 
	false = 0,
	true = 1 
	};
	
	typedef enum boolean bool;
	bool dogru_mu;
	dogru_mu = true;
	
	if( dogru_mu == true ) 
		printf("Dogru\n" );
	
	getch();
} 
