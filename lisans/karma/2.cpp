#include <stdio.h>
#include <conio.h>
#include <string.h>

void terscevir(char *dizi)
{
	int a=strlen(dizi);
	for(a;a>=0;a--)
	{
		printf("%c",dizi[a]);
	}
}

int main()
{
	char dizi[10];
	printf("cumle gir: "); 
	gets(dizi);
	terscevir(dizi);
}
