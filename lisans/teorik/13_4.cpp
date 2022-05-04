#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct ogrenci{
	int no;
	char isim[30];
};

int main()
{
	int N;
	puts("Ogrenci Sayisi: ");
	scanf("%d",&N);
	ogrenci *liste=(ogrenci*)malloc(N*sizeof(ogrenci));
	for(int i=0;i<N;i++)
	{
		printf("No: ");
		scanf("%d",&(liste+i)->no);
		printf("Isim: ");
		scanf("%s",&(liste+i)->isim);
	}
	for(int i=0;i<N;i++)
	{
		printf("%d.ogrenci: ",i+1);
		printf("%d - %s\n",(liste+i)->no,(liste+i)->isim);
	}
}
