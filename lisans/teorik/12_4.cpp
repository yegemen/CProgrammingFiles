#include <stdio.h>
#include <conio.h>

int main()
{
	struct kayit{
		char ad[20];
		char soyad[30];
		char tel[10];
	}rehber[10];
	FILE* dosya=fopen("rehberim.txt","r");
	int i=0;
	while(!feof(dosya) && i<10)
	{
		fscanf(dosya,"%s %s %s\n",rehber[i].ad,rehber[i].soyad,rehber[i].tel);
		printf("%s %s %s\n",rehber[i].ad,rehber[i].soyad,rehber[i].tel);
		i++;
	}
	fclose(dosya);
}
