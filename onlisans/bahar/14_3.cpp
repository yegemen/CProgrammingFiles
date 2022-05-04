#include <stdio.h>
#include <string.h>

main()
{
	char isim[50];
	int a,u,b=1;
	printf("cumle gir= ");
	gets(isim);
	u=strlen(isim);
    char *pdizi=&isim[0];
	for(;*pdizi!=NULL;pdizi++){
		for(a=0;a<b;a++)
			printf("  ");
		printf("%c",*pdizi);
		printf("\n");
		b++;
        }
}
