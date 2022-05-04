#include <stdio.h>
#include <math.h>

main()
{
	int a,b;
	printf("a üssü b olacak sekilde 2 sayi gir=");
	scanf("%d-%d",&a,&b);//sayilari tire koyarak gir.
    printf("%d üssü %d=%.f",a,b,pow(a,b));
}
