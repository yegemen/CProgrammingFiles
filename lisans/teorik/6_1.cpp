#include <stdio.h>
#include <conio.h>

int max_bul(double *a,int N)
{
	double max=a[0]; //max=*a;
	int indis=0;
	for(int i=1;i<N;i++)
	{
		if(a[i]>max) //if(*(a+i)>max)
		{
			max=a[i]; //max=*(a+i);
			indis=i;
		}
	}
	return indis;
}

int main()
{
	double dizi[10]={2.6, -2, -5, 6.4, 8.8, 1, 4.8, 0.6, 4, 2.2};
	int x=max_bul(dizi,10);
	printf("En buyuk elemanin indisi: %d\n",x);
	printf("En buyuk eleman: %.2f",dizi[x]); //dizi[x]) --> *(dizi+x);
}
