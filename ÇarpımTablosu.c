#include<stdio.h>
int k,l,m;
char x=' ';
void main()
{
     printf("CARPIM TABLOSU\n");
     printf(" ");
     for(k=1; k<=10; k++) printf("%2c%2d",x,k);
     printf("\n");
     printf("   ---------------------------------------");
     printf("\n");
     for(k=1; k<=10; k++){
         printf("%2d|",k);    
         for(l=1;l<=10;l++){
             printf("%2d  ",k*l);
         }
         printf("\n");
     }                            
     getch();
}
