#include <stdio.h>
#include <string.h>

main()
{
	int a,b,c[10],sayac=0;
	char kelime[100],ara[1],degistir[1];
	printf("Bir Cümle Giriniz= ");
	gets(kelime);
	a=strlen(kelime);
	printf("Aranacak Harfi gir= ");
	gets(ara);
	printf("Yeni Harfi gir= ");
	gets(degistir);
        printf("\nYeni Cümle=");
	for(b=0;b<a;b++)
	{
		if(kelime[b]==ara[0])
		{
			kelime[b]=degistir[0];
			sayac=sayac+1;
                        
		}
		printf("%c",kelime[b]);
	}
	printf("\n%d tane harf degistirildi.\nBu Harfler ",sayac);
	for(b=0;b<a;b++)
	{
		if(kelime[b]==degistir[0])
		{
			c[b]=b+1;
                        printf("%d. sirada ",c[b]);
                        
		}
		
	}
        printf("dir.");
}