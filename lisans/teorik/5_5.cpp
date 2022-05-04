#include <stdio.h>
#include <conio.h>
#include <string.h>

char * ters_cevir(char a [])
{
	int i =0;
	int j=strlen(a)-1;
	while(i<j)
	{
		char gecici=a[i];
		a[i]=a[j];
		a[j]=gecici;
		i++;
		j--;
	}
	return a;
}

int main()
{
	char yazi[50];
	gets(yazi);
	printf("%s",ters_cevir(yazi));
	getch;
}
