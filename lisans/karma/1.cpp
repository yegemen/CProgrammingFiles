#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char dizi[11]= "kara kalem";
	char giris[10];
	scanf("%s",giris);
	printf("\n");
	for(int i=0;i<10;i++)
	{
		printf("%c",*(dizi+i));
	}
	printf("\n%s",giris);
}
