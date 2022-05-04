#include <stdio.h>
#include <stdlib.h>
void bankamatik(int miktar)
{
	int yirmi=0,on=0,bes=0;
	if(miktar%5==0)
    {
	yirmi=miktar/20;
	miktar=miktar-(yirmi*20);
	on=miktar/10;
	miktar=miktar-(on*10);
	bes=miktar/5;
	printf("banka ciktisi= \n\nYirmilik= %d\nOnluk= %d\nBes= %d",yirmi,on,bes);
	}
	else
	{
    printf("5 in katlari olmasi lazim\a\n");
    }
}

main()
{
	int miktar;
	printf("Cekilecek para miktari (YTL)= ");
	scanf("%d",&miktar);
	bankamatik(miktar);
    return 0;
}
