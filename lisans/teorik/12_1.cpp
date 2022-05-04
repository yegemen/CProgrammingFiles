#include <stdio.h>
#include <conio.h>
#include <string.h>

struct urun{
	int id;
	char ad[20], marka[20];
	float fiyat;
};

int main()
{
	struct urun urunler[2];
	urunler[0].id=1;
	
	strcpy(urunler[0].ad, "laptop");
	strcpy(urunler[0].marka, "monster");
	
	/*gets(urunler[0].ad);
	gets(urunler[0].marka);*/
	
	urunler[0].fiyat=3000;

	
	printf("1. urun adı=%s",urunler[0].ad);
}
