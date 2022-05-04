#include <stdio.h>
#include <conio.h>

int main()
{
	int dizi[5];
	printf("adres=%p",&dizi[0]);
	printf("\nadres=%p",&dizi[1]);
	printf("\nadres=%p",&dizi[2]);
	printf("\nadres=%p",&dizi[3]);
	printf("\nadres=%p",&dizi[4]);
	
	printf("\n");
	
	int *p[2];
	int a=2,b=3;
	p[0]=&a;
	p[1]=&b;
	
	printf("a'nin adresi=%p, degeri=%d\n",p[0],*p[0]);
	printf("b'nin adresi=%p, degeri=%d\n\n",p[1],*p[1]);
	
	printf("p[0] gostericisinin adresi=%p\n",&p[0]);
	printf("p[1] gostericisinin adresi=%p\n\n",&p[1]);
	
	int *x,*y;
	
	printf("x gosterisinin adresi: %p\n",&x);
	printf("y gosterisinin adresi: %p\n",&y);
}
