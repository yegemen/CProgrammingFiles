#include <stdio.h>

void birler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("bir ");break;
		case 2: printf("iki ");break;
		case 3: printf("�� ");break;
		case 4: printf("d�rt ");break;
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
		case 1: printf("y�z ");break;
		case 2: printf("iki y�z ");break;
		case 3: printf("�� y�z ");break;
		case 4: printf("d�rt y�z ");break;
		case 5: printf("bes y�z ");break;
		case 6: printf("alti y�z ");break;
		case 7: printf("yedi y�z ");break;
		case 8: printf("sekiz y�z ");break;
		case 9: printf("dokuz y�z ");break;
    }
}
void binler(int sayi)
{
	switch(sayi)
	{
		case 1: printf("bin ");break;
		case 2: printf("iki bin ");break;
		case 3: printf("�� bin ");break;
		case 4: printf("d�rt bin ");break;
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
	printf("d�rt basamakli sayi girin: ");
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
			printf(" Y�z ");
		}
		onlar(onb);
		birler(birb);
	}
	else
    	printf("d�rt basamakli sayi girin..");
}