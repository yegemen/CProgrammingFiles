#include <stdio.h>
#include <math.h>

main()
{
	int c,b,n,i;float toplam=0;
	printf("c giriniz= ");scanf("%d",&c);
	printf("b giriniz= ");scanf("%d",&b);
	printf("n giriniz= ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		toplam =toplam+(c/pow(b,i));
	}
    printf("toplam= %.3f",toplam);
}