#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int **matris;
	int satir,sutun;
	
	printf("Matrisin satir ve sutun sayisi: ");
	scanf("%d %d", &satir, &sutun);
	
	matris=(int**)calloc(satir,sizeof(int));
	
	for(int i=0;i<satir;i++)
		matris[i]=(int*)calloc(sutun,sizeof(int));
	
	for(int i=0;i<satir;i++)
		for(int j=0;j<sutun;j++)
		{
			printf("Matrisin elemani girin: matris[%d][%d] = ",i,j);
			scanf("%d", &(matris[i][j]));
		}
	
	puts("Girilen Matris");
	for(int i=0;i<satir;i++)
	{
		for(int j=0;j<sutun;j++)
			printf("%d \t",matris[i][j]);
		printf("\n");
	}
		
	for(int i=0;i<satir;i++)
		free(matris[i]);
		
	free(matris);
		
}
