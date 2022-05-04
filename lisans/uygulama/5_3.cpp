#include <stdio.h>
#include <conio.h>

void degistir(int *a)
{
	*a=7;
}

int main()
{
	int s=78;
	printf("s=%d\n", s);
	degistir(&s);
	printf("s=%d", s);
	getch();	
}
