#include <stdio.h>
void enbuyuk(int a,int b)
{
	if(a>b)
	{
    	printf("1. sayi b�y�kt�r.");
	}
	else if(a<b)
	{
		printf("2. sayi b�y�kt�r.");
	}
	else
	{
		printf("sayilar esittir.");
    }
}
void enkucuk(int a,int b)
{
	if(a<b)
	{
    	printf("1. sayi k���kt�r.");
	}
	else if(a>b)
	{
		printf("2. sayi k���kt�r.");
	}
	else
	{
    	printf("sayilar esittir");
    }
}
void carp(int a,int b)
{
	printf("Carpim %d",a*b);
}
void cikart(int a,int b)
{
	printf("Fark %d",a-b);
}
main()
{
	int a,b,secim;
	printf("1=en b�y�k\n2=en k���k\n3=�arp\n4=�ikart\nislem se�=");
	scanf("%d",&secim);
	printf("1.sayi=");scanf("%d",&a);
    printf("2.sayi=");scanf("%d",&b);
	switch(secim)
	{
		case 1: enbuyuk(a,b); break;
		case 2: enkucuk(a,b); break;
		case 3: carp(a,b); break;
		case 4: cikart(a,b); break;
	}
}
