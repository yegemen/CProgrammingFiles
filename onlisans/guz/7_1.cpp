#include <stdio.h>
main()
{
	int a;
	for (a = 1; a<5; a++)
	{
		printf("%d-", a);
	}
	printf("\b"); //backspace görevi görür. bir yazar bir siler.
}

