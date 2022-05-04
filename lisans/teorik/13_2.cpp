#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct karmasik_sayi{
	float gercek;
	int sanal;
};

int main()
{
	karmasik_sayi *ks;
	ks=(karmasik_sayi*)malloc(sizeof(karmasik_sayi));
	
	printf("Gercek kisim: ");
	scanf("%f",&ks->gercek);
	printf("Sanal Kisim: ");
	scanf("%d",&ks->sanal);
	
	printf("Sayi: ");
	printf("%.2f + %d i",ks->gercek,ks->sanal);
}
