#include <stdio.h>
#include <conio.h>

typedef struct sayi{
	int i=1;
}s;

int main()
{
	sayi a;
	s b;
	printf("sayi=%d",a.i);
	printf("sayi=%d",b.i);
	
	printf("sayi gir: ");
	scanf("%d",&a.i);
}
