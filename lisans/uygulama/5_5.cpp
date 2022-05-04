#include <stdio.h>
#include <conio.h>



int diziOrtalama(int dizi[],int n);

int main()
{
	int a[5]={1,2,3,4,5};
	int o;
	o=diziOrtalama(a,5);
	printf("Dizinin ortalamasi=%d\n",o);
}

int diziOrtalama(int dizi[],int n)
{
	int *p,t=0;
	int i;
	p=dizi; //*veya p=&dizi[0]
	for(i=0;i<n;i++)
	t+=*(p+i);
	return (t/n);	
}
