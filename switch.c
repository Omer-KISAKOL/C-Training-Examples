#include <stdio.h>

void main(){
	int not;
	printf("Notunuzu Giriniz : ");
	scanf("%d",&not);
	switch(not/10){
		case 10: printf("NOT: A\n"); break;
		case 9: printf("NOT: A\n"); break;
		case 8: printf("NOT: B\n"); break;
		case 7: printf("NOT: C\n"); break;
		case 6: printf("NOT: D\n"); break;	
		case 5: printf("NOT: F\n"); break;	
		case 4: printf("NOT: F\n"); break;
		case 3: printf("NOT: F\n"); break;
		case 2: printf("NOT: F\n"); break;
		case 1: printf("NOT: F\n"); break;
		case 0: printf("NOT: F\n"); 
		default: printf("HATA\n");
	}
   }
