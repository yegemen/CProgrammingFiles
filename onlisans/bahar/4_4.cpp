#include <stdio.h>
int sayi1=2, sayi2=3;
int f1(int sayi1,int sayi2)
{
	sayi1++;sayi2++;
        return sayi1+sayi2;
}
int f2(void)
{
	sayi1++;sayi2=sayi2+2;
        return sayi1+sayi2;
}
int f3(void)
{
	sayi1=sayi1*sayi2;
        return sayi1+sayi2;
}
main()
{
	int sayi1=0;
	printf("sayi1=%d\tsayi2=%d\n",sayi2,sayi1);
	printf("X=%d\t",f1(sayi1,3));
	printf("Y=%d\t",f3());
	printf("Z=%d\n",f2());
	printf("sayi1=%d\n",f2());
	printf("sayi2=%d",f3());
}
