#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//say�sal loto. ka� kolon oynayaca��m�z� giriyoruz ve 6 tane 1-49 aras� say� �retiliyor. �retilen say� bi �ncekinden farkl� olacak.

int main()
{
	int i,y,z;
	int say[6];
	srand(time(NULL));
	printf("ka� kolon oynamak istiyorsunuz= ");
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