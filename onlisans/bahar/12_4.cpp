#include <stdio.h>

main()
{
	int a=14;
	int *b;
	int c=55;
	b=&a;
	printf("a nin degeri=%d\n",a);
	*b=c;
	printf("a nin degeri=%d\n",a);
}
