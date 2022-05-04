#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 6

int main()
{
	double *dizi;
	dizi=(double*)malloc(N*sizeof(double));
	if(dizi==NULL)
	{
		printf("Yetersiz Bellek Alani \n");
		exit(1);
	}
	printf("%d byte bellekte yer ayrildi",(N*sizeof(double)));	
}
