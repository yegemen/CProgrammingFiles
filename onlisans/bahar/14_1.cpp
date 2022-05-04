#include <stdio.h>

main()
{
	int a=22,b=11,c[7]={5};
	int *p=&a;
	printf("%p\t%p\t%p\n",&a,&b,c); //dizi adý zaten onun baþlangýç adresini verir.
	printf("%d\n",*p);
	(*p)++;//a++;
	printf("%d\n",a);
	p=&b;
	*p=54;
    printf("%d, %d, %d",a,b,c[0]);
}
