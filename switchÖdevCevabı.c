#include <stdio.h>
main(){
int sayi,birler,onlar;
printf("1 ile 100 Arasinda Bir Sayi Giriniz:");
scanf("%d",&sayi);
if(sayi > 0 && sayi < 100)
{
birler=sayi%10;
onlar=sayi/10;
switch(onlar){
case 1:printf("On "); break;
case 2:printf("Yirmi "); break;
case 3:printf("Otuz "); break;
case 4:printf("Kirk "); break;
case 5:printf("Elli "); break;
case 6:printf("Altmis "); break;
case 7:printf("Yetmis "); break;
case 8:printf("Seksen "); break;
case 9:printf("Doksan "); break;
case 10:printf("Yuz"); break;
default: break;
}

switch(birler){
case 1:printf("Bir \n"); break;
case 2:printf("Iki \n"); break;
case 3:printf("Uc \n"); break;
case 4:printf("Dort \n"); break;
case 5:printf("Bes \n"); break;
case 6:printf("Alti \n"); break;
case 7:printf("Yedi \n"); break;
case 8:printf("Sekiz \n"); break;
case 9:printf("Dokuz \n"); break;
default:break;
}
}
else {
printf("\nGirilen sayi tanimsiz");
}
getch();
}
