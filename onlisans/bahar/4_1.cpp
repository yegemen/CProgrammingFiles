#include <stdio.h>

void dikdortgenciz(int k, int u)
{
	int i,a;
	for(i=0;i<u;i++)  //üst kenar
	{
		printf("*");
	}
	printf("\n");
	for(i=0;i<k-2;i++) //yan kenar
	{
		printf("*");
		for(a=1;a<u-1;a++)
			printf(" ");
		printf("*");
                printf("\n");
	}
	for(i=0;i<u;i++)   //alt kenar
	{
		printf("*");
	}
}

main()
{
	int kisa, uzun;
	printf("kisa kenari giriniz= "); scanf("%d",&kisa);
	printf("uzun kenari giriniz= "); scanf("%d",&uzun);
        dikdortgenciz(kisa,uzun);
}