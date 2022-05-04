#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 6

int main()
{
	char *meyveler[N]={"muz","elma","cilek","karpuz","armut","uzum"};
	for(int i=0;i<N;i++) // meyve isimleri
	{
		printf("%d. %s\n",i+1,*(meyveler+i));
	}
	for(int i=0;i<N;i++) // meyve isimlerinin baþ harfleri
	{
		printf("%c\n",**(meyveler+i));
	}
	for(int i=0;i<N;i++) // meyve isimleri
	{
		for(int j=0;j<strlen(*(meyveler+i));j++)
		{
			printf("%c",*(*(meyveler+i)+j));
		}	
		printf("\n");
	}
	
	/*
	for(int i=0;i<N;i++) // meyve isimleri
	{
		for(int j=0;j<strlen(*(meyveler+i));j++)
		{
			printf("%c",*(meyveler[i]+j));
		}	
		printf("\n");
	}
	*/
}

