#include <stdio.h>
#include <string.h>
//d��ar�dan girilen c�mlede arad���m�z harf ve ka��nc� s�rada oldu�unu g�steren program

main()
{
	int a,b,s=0;
	char kelime[100],c;
	printf("Bir c�mle giriniz: ");
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
		printf("girdiginiz c�mlede hic %c harfi yoktur.",c);
    else
    printf("girdiginiz c�mlede %d tane %c harfi vardir.",s,c);
}
