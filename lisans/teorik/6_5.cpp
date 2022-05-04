#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char donem[]="Guz/Bahar Donemi";
	printf("%s -> adresi %p\n\n",donem,donem);
	char *ptr;
	ptr=donem;
	
	//char *ptr="Guz/Bahar Donemi";
	
	for(int i=0;i<strlen(donem);i++)
		printf("%c -> adresi %p\n",*(ptr+i), (ptr+i));
		// printf("%c -> adresi %p\n",ptr[i], &ptr[i]);
		
	printf("\n%s -> adresi %p\n\n",ptr,ptr);
}
