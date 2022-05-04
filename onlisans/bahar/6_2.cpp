#include <stdio.h>

int obeb_bul(int sayi1, int sayi2)
{
	int obeb=1;int bolen=2;
	while(sayi1>1 || sayi2%bolen==0)
	{
		if(sayi1%bolen==0 && sayi2%bolen==0)
        {
		obeb=obeb*bolen;
		sayi1=sayi1/bolen;
		sayi2=sayi2/bolen;
		}
		else if(sayi1%bolen==0)
        {
		sayi1=sayi1/bolen;
        }
		else if(sayi2%bolen==0)
        {
		sayi2=sayi2/bolen;
        }
		else
        bolen++;
	}
	return obeb;
}
main()
{
	int a,b,sonuc;
	printf("Virgül koyarak 2 sayi gir=");
	scanf("%d,%d",&a,&b);
	sonuc=obeb_bul(a,b);
    printf("obeb(%d,%d)=%d",a,b,sonuc);
}
