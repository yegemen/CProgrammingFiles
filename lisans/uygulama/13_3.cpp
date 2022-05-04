/*2 adet araba i�in birinin sat�ld���n� di�erinin sat�lmad���n� d���n�n. bu bilgiyi struct i�erisinde tutacaks�n�z.
int de�er vererek 0 i�in sat�lmad�, 1 i�in sat�ld� kabul edilecek. ayr�ca sat�lmayan araban�n markas�, sat�lan araban�n ise
fiyat� veri olarak tutulacak (union yap�s� kullan�lacak). sonra bu bilgileri ekrana g�sterilecektir. (hangisinin fiyat�
hangisinin markas� g�sterilece�ini bilmek i�in de enum kullan�lm��t�r.*/

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
