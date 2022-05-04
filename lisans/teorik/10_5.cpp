#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int i,*x;
	int adet_tek=0, adet_cift=0;
	srand(time(0));
	x=(int*)malloc(10*sizeof(int));
	
	for(i=0;i<10;i++)
	{
		x[i]=20+rand()%71;
		printf("%d\n",x[i]);
		if(x[i]%2==0)
			adet_cift+=1;
		else
			adet_tek+=1;
	}
	if(adet_cift==0) 
		printf("Cift sayi yok");
	else 
		printf("%d adet cift sayi\n",adet_cift);
		
	if(adet_tek==0) 
		printf("Tek sayi yok");
	else 
		printf("%d adet tek sayi\n",adet_tek);
		
	free(x);
}
