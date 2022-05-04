#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//10 elemanlý iki dizi var, 11-54 arasý rastgele sayý alacaklar. ikisinin indislerinden kaç tanesi eþit.

main()
{
	int i,s=0;
	int a[10];
	int b[10];
        srand(time(NULL));
	for(i=0;i<=9;i++)
	{
		a[i]=rand()%44+11;
                b[i]=rand()%44+11;
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]==b[i])
		{
                	s++;
                }
	}
        printf("%d tane ayni sayi bulundu.",s);
}
