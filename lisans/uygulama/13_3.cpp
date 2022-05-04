/*2 adet araba için birinin satýldýðýný diðerinin satýlmadýðýný düþünün. bu bilgiyi struct içerisinde tutacaksýnýz.
int deðer vererek 0 için satýlmadý, 1 için satýldý kabul edilecek. ayrýca satýlmayan arabanýn markasý, satýlan arabanýn ise
fiyatý veri olarak tutulacak (union yapýsý kullanýlacak). sonra bu bilgileri ekrana gösterilecektir. (hangisinin fiyatý
hangisinin markasý gösterileceðini bilmek için de enum kullanýlmýþtýr.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

enum satisDurumu{satilmadi,satildi}sat;

typedef struct araba
{
	int satis;
	union
	{
		double fiyat;
		char marka[10];
	}bilgi;
};
int main()
{
	araba arac[2];
	arac[0].satis=0;
	strcpy(arac[0].bilgi.marka,"Devrim");
	arac[1].satis=1;
	arac[1].bilgi.fiyat=10.000;
	for(int i=0;i<2;i++)
	{
		if(arac[i].satis==satilmadi)
			printf("%d. arabanin markasi: %s\n\n",i+1,arac[i].bilgi.marka);
		else if(arac[i].satis==satildi)
			printf("%d. arabanin satis Fiyati: %lf \n\n",i+1,arac[i].bilgi.fiyat);
	}
}
