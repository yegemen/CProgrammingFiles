#include <stdio.h>
#include <conio.h>

struct notlar{
	int vize,final;
}sayac[3];

int main()
{
	printf("notlari giriniz: \n\n");
	
	int i=0;
	
	for(i=0; i<3; i++)
	{
		printf("vize gir: ");
		scanf("%d",&sayac[i].vize);
		
		printf("final gir: ");
		scanf("%d",&sayac[i].final);
		
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		printf("vize: %d",sayac[i].vize);
		printf("\n");
		printf("final: %d",sayac[i].final);
		
		
		printf("\n");
	}
}
