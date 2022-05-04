#include <stdio.h>
#include <conio.h>

void diziYazdir(char *dizi[]);

int main()
{
	char *iller[18]=
	{
		"Canakkale","Adana","Nevsehir","Adiyaman","Kars","Kastamonu","Afyon","Luleburgaz","Edirne"," ","Gaziantep",
		"Elazig","Cankiri","Icel","Lapseki","Malatya","Erzincan","Zonguldak"
	};
	
	diziYazdir(iller);
	
	getch();
	return 0;
}

void diziYazdir(char *dizi[])
{
	for(int i=0;i<18;i++)
	{
		printf("%s",dizi[i]); //printf("%c",**(dizi+i));
	}
} 

//pointer=dinamik dizi.
