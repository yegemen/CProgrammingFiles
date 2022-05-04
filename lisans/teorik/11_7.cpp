#include <stdio.h>
#include <conio.h>

int main()
{
	union ortak{
	int x;
	int y;
	}a;
	a.x=12;
	printf("x=%d'nin adresi: %p \n",a.x,&a.x);
	a.y=7;
	printf("y=%d'nin adresi: %p \n",a.y,&a.y);
	printf("boyutu:%d byte",sizeof(a));
}
