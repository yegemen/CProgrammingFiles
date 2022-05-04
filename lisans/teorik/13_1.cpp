#include <stdio.h>
#include <conio.h>

typedef struct karmasik_sayi {
	float gercek;
	int sanal;
};

int main()
{
	karmasik_sayi *ks1, ks2;
	ks1=&ks2;
	
	printf("Gercek kisim: ");
	scanf("%f",&(*ks1).gercek); //scanf("%f",&ks1->gercek);
	printf("Sanal Kisim: ");
	scanf("%d",&(*ks1).sanal);
	
	printf("Sayi: ");
	printf("%.2f + %d i",(*ks1).gercek,(*ks1).sanal);
}
