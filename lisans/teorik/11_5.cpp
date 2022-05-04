#include <stdio.h>
#include <conio.h>

int main()
{
	struct tarih{
	int gun;
	int ay;
	int yil; };
	struct tarih dt,mt;
	puts("Dogum tarihinizi (gun ay yil) giriniz: ");
	scanf("%d %d %d",&dt.gun,&dt.ay,&dt.yil);
	puts("Mezuniyet tarihinizi (gun ay yil) giriniz: ");
	scanf("%d %d %d",&mt.gun,&mt.ay,&mt.yil);
	
	FILE *yaz=fopen("tarihler.txt","w");
	fprintf(yaz,"%d %d %d\n",dt.gun,dt.ay,dt.yil);
	fprintf(yaz,"%d %d %d\n",mt.gun,mt.ay,mt.yil);
}
