#include <stdio.h>
#include <conio.h>

int main()
{
	int dizi[]={66,6,42,11,54}; //normal dizi
	int *ptr[5], i;// gösterici dizisi
	
	for(i=0;i<5;i++)
	{
		printf("dizi[%d]=%d\n",i,dizi[i]);
	}
	
	printf("\n");
	
	for(i=0;i<5;i++) //gösterici dizisine adres atama
	{
		ptr[i]=&dizi[i];
		printf("dizi[%d]=%d \t adresi:%p \n",i,*ptr[i],ptr[i]);
	}
}
