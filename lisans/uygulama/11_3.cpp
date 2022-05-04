#include <stdio.h>
#include <conio.h>

struct kitap
{
	int kitapId;
	char kitapIsmi[50];
	char yazarIsmi[50];
	char kitapKonusu[100];
}sayac[3];

int main()
{
	int i;
	printf("Kitap Bilgilerini Giriniz\n");
	
	for(i=0; i<3; ++i)
	{
		sayac[i].kitapId=i+1;
		
		printf("\nKitap Sira No:%d,\n",sayac[i].kitapId);
		
		printf("Kitabin Adi: ");
		gets(sayac[i].kitapIsmi);
		
		printf("Yazarin ismi: ");
		gets(sayac[i].yazarIsmi);
		
		printf("Kitabin Konusu: ");
		gets(sayac[i].kitapKonusu);
		
		printf("\n");
	}
	for(i=0; i<3; ++i)
	{
		printf("\nKitap Sira No:%d,\n",sayac[i].kitapId);
		puts(sayac[i].kitapIsmi);
		puts(sayac[i].yazarIsmi);
		puts(sayac[i].kitapKonusu);
		
		printf("\n");
	}
}
