//rand(); rastgele sayi �reten fonksiyon
//srand(); baslangic sayisini kendimiz vermek icin
//form�l= %(bitis degeri-baslangic degeri+1)+baslangic degeri

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{                      
	int a,b,c;
	srand(time(NULL)); //sistem saatine g�re sayi alir.
	for(a=0;a<10;a++)
	{
		b=rand();
		c=b%11+12; //12 ile 22 arasinda almasi icin..
		printf("%d----%d----%d\n",a,b,c);
    }
}
