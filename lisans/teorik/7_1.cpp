#include <stdio.h>
#include <conio.h>

int main()
{
	int x;
	int *p1;
	int **p2;
	x=5;
	p1=&x;
	p2=&p1;
	printf("x degiskeni: %d, adresi:%p\n",x,&x); //&x-->p1
	printf("p1 gostericisi:%p, adresi:%p\n",p1,&p1); //&x-->p1
	printf("p2 gostericisi:%p, adresi:%p\n",p2,&p2);	
}
