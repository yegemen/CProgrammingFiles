#include <stdio.h>
#include <conio.h>

typedef struct zaman{
	int saat;
	int dakika;
	int saniye;
};

int hesapla(zaman x)
{
	return (x.saat*3600+x.dakika*60+x.saniye);
}

int main()
{
	zaman t;
	printf("Saat: ");
	scanf("%d",&t.saat);
	printf("Dakika: ");
	scanf("%d",&t.dakika);
	printf("Saniye: ");
	scanf("%d",&t.saniye);
	
	int sure=hesapla(t);
	printf("%d saniye eder",sure);
}



