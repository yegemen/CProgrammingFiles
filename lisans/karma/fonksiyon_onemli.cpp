#include <stdio.h>
#include <conio.h>

int deger()
{
	int a;
	printf("deger gir: ");scanf("%d",&a);
	return a;
}

int main()
{
	int degisken=deger();
	printf("girilen deger=%d",degisken);
}
