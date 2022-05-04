#include <stdio.h>

main()
{
	char a='h';
	char *g=&a;
	printf("a degiskeninin icerigi=%c\n",a);
	printf("a degiskeninin adresi=%x\n",&a);
	printf("a degiskeninin adresi=%p\n",g);
	printf("g isaretcisinin adresi=%p\n",&g);
	printf("a degiskeninin icerigi=%c\n",*g);
}
