// kullan�c�dan y�l g�n ve ay degerlerini al�p kullan�c�n�n dogum tarihini yazd�r�n. struct kullanarak.

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
//struct, farkl� veya ayn� t�rdeki de�i�kenlerin bir yap�da tutulmas�d�r. �rn: telefon rehberi
