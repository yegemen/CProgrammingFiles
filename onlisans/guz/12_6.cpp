#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//sayýsal loto. kaç kolon oynayacaðýmýzý giriyoruz ve 6 tane 1-49 arasý sayý üretiliyor. üretilen sayý bi öncekinden farklý olacak.

int main()
{
	int i,y,z;
	int say[6];
	srand(time(NULL));
	printf("kaç kolon oynamak istiyorsunuz= ");
	scanf("%d",&z);
	for(y=0;y<z;y++)
	{   	

	for(i=0;i<=5;i++)
	{
		say[i]=rand()%49+1;
		if(say[i]==say[i-1]||say[i]==say[i-2]||say[i]==say[i-3]||say[i]==say[i-4]||say[i]==say[i-5]||say[i]==say[i-6])
		{
			i=i-1;
		}
	}
	
	printf("\nKolonlar= \n");
	for(i=0;i<=5;i++)
	{
		printf("%d-",say[i]);
	}
	printf("\b");
    printf("\n");
	}
}