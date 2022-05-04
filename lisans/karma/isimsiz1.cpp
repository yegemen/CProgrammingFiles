#include <stdio.h>
#include <conio.h>

void yaz(char *dizi)
{
	for(int i=0;i<2;i++)
	{
		printf("%c",dizi[i]);
	}
}

int main()
{
	char *str[11]={"kara kalsssssssssssssssssssss","sdadsadsadsadsadsadsadsadsa"};
	printf("%s\n",*(str+1));
	char dizi[3]="as";
	yaz(dizi);
	
	int sayi[2]={1,2};
	
	int *p=sayi;
	
	p[0]=5;
	
	printf("\n%d\n\n",sayi[0]);
	
	char *a="yusuf egemen";
	printf("%s\n",a);
	
	printf("%c",a[4]);
}
