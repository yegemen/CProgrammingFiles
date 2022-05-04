//rand(); rastgele sayi üreten fonksiyon

#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b;
	for(a=0;a<10;a++)
	{
		b=rand();
        printf("%d----%d\n",a,b);
    	}
}