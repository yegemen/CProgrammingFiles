#include <stdio.h>
#include <string.h>

main()
{
	int a,b;
	char kelime[100];
	printf("Bir cümle giriniz: ");
	gets(kelime);
	a=strlen(kelime);
	for(b=a-1;b>=0;b--)
	{
    	printf("%c",kelime[b]);
    }
}
