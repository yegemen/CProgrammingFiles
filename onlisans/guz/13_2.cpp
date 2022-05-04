#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int a,b,sayac=0,sayi=0,adet[100];
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
			adet[sayi]=b+1;
                        sayi++;
                        
		}
		printf("%c",kelime[b]);
	}
	printf("\n%d tane harf degistirildi. bunlar girilen dizinin ",sayac);
	for(b=0;b<sayi;b++)
	{
		printf("%d.,",adet[b]);                   

	}
        printf("\b harfleridir.");

}
