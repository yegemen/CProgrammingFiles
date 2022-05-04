#include <stdio.h>

void yildiz(int sayac)
{
	for(sayac;sayac>=1;sayac--)
	printf("*");
}
main()
{
	int syc;
	for(syc=5;syc>=1;syc--)
	{
		yildiz(syc);
		printf("\n");
        }
}
