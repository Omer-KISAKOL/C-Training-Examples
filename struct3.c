#include <stdio.h>
#include <string.h>

void main(){
	struct bilgi{char isim[40]; int boy;};
	
	struct bilgi kisi1;
	struct bilgi kisi2;
	
	strcpy(kisi1.isim,"Omer");
	kisi1.boy = 178;
	
	strcpy(kisi2.isim,"Hatice");
	kisi2.boy = 165;
	
	getch();
}
