// kullanýcýdan yýl gün ve ay degerlerini alýp kullanýcýnýn dogum tarihini yazdýrýn. struct kullanarak.

#include <stdio.h>
#include <conio.h>

int main()
{
	struct dogum_tarihi{
		int gun,ay,yil;
	};
	struct dogum_tarihi dt;
	printf("Dogum tarihinizi girin (gun ay yil): ");
	scanf("%d %d %d",&dt.gun,&dt.ay,&dt.yil);
	
	printf("\n Dogum Tarihiniz: %d.%d.%d",dt.gun,dt.ay,dt.yil);
}
//struct, farklý veya ayný türdeki deðiþkenlerin bir yapýda tutulmasýdýr. örn: telefon rehberi
