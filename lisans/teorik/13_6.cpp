#include <stdio.h>
#include <conio.h>

struct kayit{
	char ad[20];
	char soyad[30];
	char tel[10];
}rehber[10];

void dosyadan_oku(FILE *fptr, struct kayit a[])
{
	int i=0;
	while(!feof(fptr) && i<10)
	{
		fscanf(fptr,"%s %s %s\n",a[i].ad,a[i].soyad,a[i].tel);
		printf("%s %s %s\n",a[i].ad,a[i].soyad,a[i].tel);
		i++;
	}
	fclose(fptr);
}
int main()
{
	FILE * dosya=fopen("rehberim.txt","r");
	dosyadan_oku(dosya,rehber);
}
