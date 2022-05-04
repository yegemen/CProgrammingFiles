#include <stdio.h>

main()
{
	int a=11;
	int *b;
	b=&a;
	printf("a nin degeri=%d\n",a);
	*b=22;
    printf("a nin degeri=%d\n",a);
}
