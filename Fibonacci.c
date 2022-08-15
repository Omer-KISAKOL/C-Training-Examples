#include <stdio.h>

long fibonacci(int n){
	long fib;
	
	if(n <= 1)
		fib = n;
	
	else	 
		fib = fibonacci(n-1) + fibonacci(n-2);
			
	return fib;	
}

void main(){
	int sayi;
	long sonuc;
	
	printf("Fibonacci serisindeki kacinci elemani bulmak istediginizi yaziniz: ");
	scanf("%d",&sayi);
	sonuc = fibonacci(sayi);
		
	printf("Fibonacci(%d): %ld",sayi,sonuc);
	
	getch();
}
