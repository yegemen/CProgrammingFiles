#include <stdio.h>
int EnBuyuk(int a,int b)
{
	if(a>=b)
		return a;
	else
    	return b;
}
int EnKucuk(int a,int b)
{
	if(a<=b)
		return a;
	else
		return b;
}
int Carp(int a,int b)
{
	int sonuc;
	sonuc=a*b;
	return sonuc;
}
int Cikart(int a,int b)
{
	return a-b;
}
main()
{
	int a,b,secim,gecici;
	printf("1-en b�y�k \n2=en k���k\n3=�arp\n4=�ikart\nislem se�=");
	scanf("%d",&secim);
	printf("1.sayi=");scanf("%d",&a);
	printf("2.sayi=");scanf("%d",&b);
	switch(secim)
	{
		case 1:printf("en b�y�k %d",EnBuyuk(a,b));break;
		case 2:printf("en k���k %d",EnKucuk(a,b));break;
		case 3:gecici=Carp(a,b);printf("�arpim= %d",gecici);break;
        case 4:printf("Farki %d",Cikart(a,b));break;
    }
}