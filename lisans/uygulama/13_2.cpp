#include <stdio.h>
#include <conio.h>

int main()
{
	struct{
		char isim[40];
		int boy;
		struct{
			int yil;
			int ay;
			int gun;
		}dogum_bilgileri;
	}kisi;

	printf("Adiniz: ");
	scanf("%s",kisi.isim);
	printf("Boyunuz: ");
	scanf("%d",&kisi.boy);
	printf("Dogum Tarihi: ");
	scanf("%d/%d/%d", &kisi.dogum_bilgileri.gun,&kisi.dogum_bilgileri.ay,&kisi.dogum_bilgileri.yil);
	
	printf("Girilen Bilgiler:\n");
	printf("Isim: %s\n",kisi.isim);
	printf("Boy: %d\n",kisi.boy);
	printf("Dogum Tarihi: %d/%d/%d",kisi.dogum_bilgileri.gun,kisi.dogum_bilgileri.ay,kisi.dogum_bilgileri.yil);
}
