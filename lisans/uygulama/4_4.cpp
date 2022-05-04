#include <stdio.h>
#include <conio.h>

int main()
{
	char str[20]="Hello";
	char *p=str;
	*p='M';
	printf("%s\n",str);
	getchar();
	return 0;
}

