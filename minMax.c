#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=0,min,x,a;

    while(a!=-1)
    {
        printf("-1 yazarsaniz sonlanacaktir:");
        scanf("%d",&a);

        printf("bir sayi giriniz:");
        scanf("%d",&x);

        if(x<=min){

            min=x;
         }
        if(x>=max)
        {
            max=x;

        }



    }
    printf("max sayi:%d ",max);
    printf("min sayi:%d",min);
    return 0;
}
