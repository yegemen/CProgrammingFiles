#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//10 elemanl� iki dizi var, 11-54 aras� rastgele say� alacaklar. ikisinin indislerinden ka� tanesi e�it.

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
