#include <stdio.h>
#include <conio.h>

int main()
{
	char *ptr;
	char str[11] = "kara kalem";
	ptr=&str[0];
/*	for(int i=0;i<=10;i++)
	{
		printf("%c",str[i]);
	}*/
	/*ptr=&str[0];
	for(int i=0;i<=10;i++)
	{
		printf("%c",*ptr);
		*ptr++;
	}*/
	
	for(int i=0;i<=10;i++)
		printf("%c",*(ptr+i));
		
		printf("\n");
		
	for(int i=0;i<=10;i++)
	{
		printf("%c",*ptr);
		ptr=ptr+1;
	}
	
	
}
