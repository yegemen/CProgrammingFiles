#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	typedef struct isci{
		char adi_soyadi[50];
		int yas;
		double maas; };
	isci x1,x2;
	strcpy(x1.adi_soyadi,"Ali Akin");
	x1.yas=25;
	x1.maas=2000;
	strcpy(x2.adi_soyadi,"Sedef Gunay");
	x2.yas=36;
	x2.maas=3200;
	printf("%s\t yas: %d\t maas:%.2f\n",
	x1.adi_soyadi,x1.yas,x1.maas);
	printf("%s\t yas: %d\t maas:%.2f\n",
	x2.adi_soyadi,x2.yas,x2.maas);
}

