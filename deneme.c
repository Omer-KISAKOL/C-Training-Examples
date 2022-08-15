struct kisi{
int sicil_no;
char ad[10];
char soyad[10];
int yas;
float maas;
}k[5];
void main()
{
int i;
for (i=0; i<5; i++){
printf(" %d. kisi icin bilgileri giriniz. \n",i+1);
printf("\nsicil no=");
scanf("%d",&k[i].sicil_no);
printf("ad=");
scanf("%s",&k[i].ad);
struct kisi{
int sicil_no;
char ad[10];
char soyad[10];
int yas;
float maas;
}k[5];
void main()
{
int i;
for (i=0; i<5; i++){
printf(" %d. kisi icin bilgileri giriniz. \n",i+1);
printf("\nsicil no=");
scanf("%d",&k[i].sicil_no);
printf("ad=");
scanf("%s",&k[i].ad);
printf("soyad=");
scanf("%s",&k[i].soyad);
printf("yas=");
scanf("%d",&k[i].yas);
printf("maas=");
scanf("%f",&k[i].maas);
}
for (i=0; i<5; i++)
{
printf("\n%d %s %s %d %.2f",k[i].sicil_no, k[i].ad, k[i].soyad,k[i].yas, k[i].maas);
}
getch();
}
