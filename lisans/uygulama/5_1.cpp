#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int *p;
	printf("sayi gir= "); scanf("%d",&a);
	p=&a; // *p=a
	printf("degiskenin adresi= %p\n degiskenin degeri=%d",p,*p);
}
