//rand(); rastgele sayi �reten fonksiyon
//srand(); denklemde x sayisini kendimiz vermek icin

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{                      
	int a,b;
	srand(time(NULL)); //sistem saatine g�re sayi alir.
	for(a=0;a<10;a++)
	{
		b=rand();
        printf("%d----%d\n",a,b);
    }
}