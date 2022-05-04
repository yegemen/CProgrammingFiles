#include <stdio.h>

void birler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("bir ");break;
		case 2: printf("iki ");break;
		case 3: printf("üç ");break;
		case 4: printf("dört ");break;
		case 5: printf("bes ");break;
		case 6: printf("alti ");break;
		case 7: printf("yedi ");break;
		case 8: printf("sekiz ");break;
		case 9: printf("dokuz ");break;
    }
}
void onlar(int sayi)
{
	switch(sayi)
	{
		case 1: printf("on ");break;
		case 2: printf("yirmi ");break;
		case 3: printf("otuz ");break;
		case 4: printf("kirk ");break;
		case 5: printf("elli ");break;
		case 6: printf("altmis ");break;
		case 7: printf("yetmis ");break;
		case 8: printf("seksen ");break;
		case 9: printf("doksan ");break;
    }
}
void yuzler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("yüz ");break;
		case 2: printf("iki yüz ");break;
		case 3: printf("üç yüz ");break;
		case 4: printf("dört yüz ");break;
		case 5: printf("bes yüz ");break;
		case 6: printf("alti yüz ");break;
		case 7: printf("yedi yüz ");break;
		case 8: printf("sekiz yüz ");break;
		case 9: printf("dokuz yüz ");break;
    }
}
void binler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("bin ");break;
		case 2: printf("iki bin ");break;
		case 3: printf("üç bin ");break;
		case 4: printf("dört bin ");break;
		case 5: printf("bes bin ");break;
		case 6: printf("alti bin ");break;
		case 7: printf("yedi bin ");break;
		case 8: printf("sekiz bin ");break;
		case 9: printf("dokuz bin ");break;
    }
}

main()
{
	int sayi,birb,onb,yuzb,binb;
	printf("dört basamakli sayi girin: ");
	scanf("%d",&sayi);
	if(sayi>=1000 && sayi<=9999)
	{
		birb=sayi%10;
		onb=(sayi/10)%10;
		yuzb=(sayi/100)%10;
		binb=(sayi/1000)%10;
		if(binb!=1)
			birler(binb);
		printf(" Bin ");
		if(yuzb!=0)
		{
			birler(yuzb);
			printf(" Yüz ");
		}
		onlar(onb);
		birler(birb);
	}
	else
    	printf("dört basamakli sayi girin..");
}