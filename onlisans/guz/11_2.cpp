#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
int a,b,t;
srand(time(NULL));
b=rand()%5+1;
printf("%d\n",b);
for(a=0;a<5;a++)
{
	printf("1 ile 5 arasinda tahmin giriniz= ");
	scanf("%d",&t);
	if(t==b)
        {
	printf("dogru tahmin ettiniz.");
        break;
	}
	else
	{
        printf("yanlis tahmin ettiniz.\n");
	}
}
}