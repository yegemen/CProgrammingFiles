#include <stdio.h>
main()
{
int a,b,c;
printf("baslangic degeri gir= ");
scanf("%d",&a);
printf("bitis degeri gir= ");
scanf("%d",&b);
printf("degisim miktari gir= ");
scanf("%d",&c);
	for(a;a<=b;a=a+c)
	{
		printf("%d-",a);
	}
	printf("\b");
}
