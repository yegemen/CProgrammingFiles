#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	char *p=(char*)malloc(sizeof(char)*2); //2 byte alan ayrýldý.
	p[0]='?'; // *p
	p[1]='!'; // *(p+1)
	
	p=(char*)realloc(p, sizeof(char)*5); //5 byte alan ayrýldý.
	p[2]='%';
	p[3]='&';
	p[4]='"';
	
	for(int i=0;i<5;i++)
	{
		printf("%c ",p[i]);
	}
}
