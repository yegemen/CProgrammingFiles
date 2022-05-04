#include <stdio.h>
#include <stdlib.h>

main()
{
	char *birler[10]={"","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
	char *onlar[10]={"","on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
	char *yuzler[10]={"","yuz","ikiyuz","ucyuz","dortyuz","besyuz","altiyuz","yediyuz","sekizyuz","dokuzyuz"};
	char *binler[10]={"","bin","ikibin","ucbin","dortbin","besbin","altibin","yedibin","sekizbin","dokuzbin"};
	int b,o,y,bi,obi1,obi2;
	long sayi;
	printf("sayi gir=");
	scanf("%ld",&sayi);
	b=sayi%10;
	o=(sayi/10)%10;
	y=(sayi/100)%10;
	bi=(sayi/1000);
	if(bi>9&bi<100)
	{
		obi1=bi%10;
		obi2=(bi/10)%10;
		printf("%s %s bin ",onlar[obi2],birler[obi1]);
		printf("%s %s %s",yuzler[y],onlar[o],birler[b]);
	}
	else
		printf("%s %s %s %s", binler[bi],yuzler[y],onlar[o],birler[b]);
	
}
