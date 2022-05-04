#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct karmasik_sayi{
	float gercek;
	int sanal;
};

int main()
{
	int N=2;
	karmasik_sayi *ks;
	ks=(karmasik_sayi*)malloc(N*sizeof(karmasik_sayi));
	
	for(int i=0;i<N;i++)
	{
		printf("Gercek kisim: ");
		scanf("%f",&(ks+i)->gercek);
		printf("Sanal kisim: ");
		scanf("%d",&(ks+i)->sanal);
		printf("Sayi: ");
		printf("%.2f + %d i\n",(ks+i)->gercek,(ks+i)->sanal);
	}
	
}
