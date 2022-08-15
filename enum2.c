#include<stdio.h>

void main(){
	enum ana_renkler {Kirmizi, Mavi, Sari };
	
	enum ana_renkler piksel;
	piksel = Mavi;
	
	if( piksel == Kirmizi ) 
		printf( "Kirmizi piksel\n" );
		
	else if( piksel == Mavi )
		printf( "Mavi piksel\n" );
	
	else 
		printf( "Sari piksel\n" );
		

	getch();
}
