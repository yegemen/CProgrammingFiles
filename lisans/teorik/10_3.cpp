#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,i;
	float *x, toplam=0.0, s_sapma;
	printf("Eleman sayisi: ");
	scanf("%d",&n);
	
	x=(float*)calloc(n,sizeof(float));
	if(x==NULL)
	{
		puts("Yetersiz bellek alani");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("%d. eleman: ",i+1);
		scanf("%f",&x[i]);
		toplam+=x[i]*x[i];
	}
	s_sapma=sqrt(toplam/n);
	printf("standart sapma = %f\n",s_sapma);	
}
