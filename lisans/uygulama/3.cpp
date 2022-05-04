#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int i,sayi,e;
	int dizi[100];
	printf("dizi eleman sayisi girin= ");
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		printf("\n %d. elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}	
	printf("\n Aranan elemani giriniz: ");
	scanf("%d",&sayi);
	for(i=0;i<e;i++)
	{
		if(dizi[i]==sayi)
		{
			printf("\n %d sayisi %d. indiste yer almaktadir.",sayi,i+1);
			break;
		}
	}
	if(i==e)
	{
		printf("dizi elemani bulunamamistir.");
	}
	
}
