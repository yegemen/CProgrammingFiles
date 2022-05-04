#include <stdio.h>
#include <string.h>
int topla(int s1,int s2,int s3)
	{
		int toplam;
		toplam=s1+s2+s3;
		return toplam;
	}
main()
{
	   int a,b,c,ort;
	   printf("1. sayiyi giriniz= ");
	   scanf("%d",&a);
	   printf("2. sayiyi giriniz= ");
	   scanf("%d",&b);
	   printf("3. sayiyi giriniz= ");
	   scanf("%d",&c);
	   ort=topla(a,b,c);
	   printf("3 sayinin toplami=%d",ort);
}
