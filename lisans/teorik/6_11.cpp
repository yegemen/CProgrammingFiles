#include <stdio.h>
#include <conio.h>

float ortalama(int *dizi[],int eleman_sayi)
{
	int toplam=0;
	for(int i=0;i<eleman_sayi;i++)
	{
		toplam+=*dizi[i];
	}
	float ort=(float)toplam/eleman_sayi;
	return ort;
}

int main()
{
	const int boyut=7;
	int notlar[boyut]={25,40,5,95,50,65,45};
	int *ptr[boyut];
	for(int i=0;i<boyut;i++)
	{
		ptr[i]=&notlar[i];
	}
	printf("Ortalama=%.2f",ortalama(ptr,boyut));
}
