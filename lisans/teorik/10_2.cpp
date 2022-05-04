#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int boyut=0, i=0;
	int *dizi;
	printf("Dizi boyutunu girin: ");
	scanf("%d",&boyut);
	
	dizi=(int *)malloc((boyut*sizeof(int)));
	
	srand(time(NULL));
	for(i=0;i<boyut;i++)
	{
		*(dizi+i)=rand()%20;
		printf("%d ",*(dizi+i));
	}
}
