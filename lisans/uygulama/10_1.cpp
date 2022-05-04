#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int eleman_sayisi, *ptr, toplam=0, i=0;
	
	printf("eleman sayisi girin: ");
	scanf("%d",&eleman_sayisi);
		
	ptr=(int*)malloc(eleman_sayisi*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Hafizada yer ayrilamadi.");
		exit(1);
	}
	for(i=0;i<eleman_sayisi;i++)
	{
		printf("\n%d. elemani girin: ",i+1);
		scanf("%d",&ptr[i]);	
		toplam+=ptr[i];
	}
	printf("\n sayilarin toplami= %d",toplam);
	
	free(pointer);
	
}
