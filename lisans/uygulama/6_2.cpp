#include <stdio.h>
#include <conio.h>

/*int sayac=0;

while(*metin !=Null)
{
sayac++;
metin++;
}

for(int i=sayac;i>=0;i--)
{
printf("%c",*metin);
metin--;
}

*/

void metinCevir(char *metin)
{
	int sayac=0;

	while(*metin !=NULL)
	{
		sayac++;
		*metin++;
	}

	for(int i=sayac;i>=0;i--)
	{
		printf("%c",*metin);
		metin--;
	}
}

int main()
{
	char dizi[30];
	printf("Metni Giriniz: ");
	scanf("%s",&dizi);
	metinCevir(dizi);
	printf("\n%s\n",dizi);
	return 0;
}
