//rand(); rastgele sayi üreten fonksiyon
//srand(); denklemde x sayisini kendimiz vermek icin

#include <stdio.h>
#include <stdlib.h>

main()
{                      
	int a,b,c;
	printf("bir sayi gir= ");
	scanf("%d",&c);
	srand(c);
	for(a=0;a<10;a++)
	{
		b=rand();
        printf("%d----%d\n",a,b);
    }
}