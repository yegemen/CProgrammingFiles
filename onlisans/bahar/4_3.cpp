#include <stdio.h>

int a=11;
int b=22;

int fonksiyonY(void)
{
	a--; b++; printf("%d,%d\n",a,b);
        return a+b;
}
void fonksiyonX(int a,int b)
{
	a++;b--; printf("%d,%d\n",a,b);
}
void fonksiyonZ(void)
{
	printf("a=%d b=%d",a,b);
}
main()
{
	int a=7,b=8;
	printf("%d,%d\n",a,b);
	a++;b++;
	fonksiyonX(a,b);
	printf("%d\n\n",fonksiyonY());
	fonksiyonZ();
        return 0;
}
