#include <stdio.h>
#include <conio.h>

void degistir(int a, int b)
{
	int gecici= a;
	a=b;
	b=gecici;
}
int main()
{
	int s1=78;
	int s2=-12;
	printf("s1=%d, s2=%d\n",s1,s2);
	degistir(s1,s2);
	printf("s1=%d, s2=%d", s1,s2);
}
