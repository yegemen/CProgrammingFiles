#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int a,b;
	char kelime[100];
	printf("Bir cümle gir=");
	gets(kelime);
	a=strlen(kelime);
	for(b=0;b<a;b++)
	{                                       
    	printf("%c",kelime[b]);
    }
}
