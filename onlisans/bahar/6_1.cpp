#include <stdio.h>

main()
{
	int a,b,buyuk,obeb;
	printf("virgül koyarak 2 sayi giriniz=" );
	scanf("%d,%d",&a,&b);
	if(a>b)
	buyuk=a;
	else
    buyuk=b;
	for(int i=buyuk;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
        	obeb=i;
			printf("obeb(%d,%d)= %d",a,b,obeb);
            break;
        }
    }
}
