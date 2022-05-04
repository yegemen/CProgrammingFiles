#include <stdio.h>
#include <conio.h>

int bas_topla(int x)
{
	int toplam=0, basamak_degeri;
	int gecici=x;
	while(gecici>0)
	{
		basamak_degeri=gecici%10;
		toplam+=basamak_degeri;
		gecici=gecici/10;
	}
	return toplam;
}

int main()
{
	int a;
	do
	{
		printf("Bir sayi giriniz: ");
		scanf("%d",&a);
	}
	while(a<=0);
	
	printf("Sayinin basamak degerleri toplami: %d\n",bas_topla(a));
	printf("Fonksiyonun adresi: %p",bas_topla);
	
}
