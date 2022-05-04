#include <stdio.h>
#include <conio.h>

int main()
{
	int *ptr, a=10;
	ptr=&a;
	*ptr+=1;
	printf("%d, %d\n",*ptr,a);
	getchar();
	return 0;
}
