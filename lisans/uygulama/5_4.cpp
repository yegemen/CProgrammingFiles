#include <stdio.h>
#include <conio.h>

void toplam(int *a,int*b)
{
	printf("iki sayinin toplami=%d",*a+*b);
}

int main()
{
	int x,y;
	printf("x gir= "); scanf("%d",&x);
	printf("y gir= "); scanf("%d",&y);
	toplam(&x,&y);
}
