#include <stdio.h>
#include <string.h>

int main()
{
	char isim[50];
	printf("cumle giriniz=");
	gets(isim);
	char *pdizi=&isim[0];
	for(;*pdizi!=NULL;pdizi++)
		printf("%c*",*pdizi);
}
