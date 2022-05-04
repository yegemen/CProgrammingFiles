#include <stdio.h>
#include <string.h>
//dýþarýdan girilen cümlede aradýðýmýz harf ve kaçýncý sýrada olduðunu gösteren program

main()
{
	int a,b,s=0;
	char kelime[100],c;
	printf("Bir cümle giriniz: ");
	gets(kelime);
	a=strlen(kelime);
	printf("aranacak harf giriniz= ");
    scanf("%c",&c);
	for(b=0;b<a;b++)
	{
		if(kelime[b]==c || kelime[b]==c+32 || kelime[b]==c-32)
		{
			s++;
			printf("%d.",b+1);
        }
	}
	if(s==0)
		printf("girdiginiz cümlede hic %c harfi yoktur.",c);
    else
    printf("girdiginiz cümlede %d tane %c harfi vardir.",s,c);
}
