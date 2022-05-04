#include <stdio.h>
#include <string.h>
int cevrebul(int a,int b)
{
	return 2*(a+b);
}
int alanbul(int a,int b)
{
	int alan;
	alan=a*b;
        return alan;
}
main()
{
	int a,b;
	printf("a kenari giriniz= "); scanf("%d",&a);
	printf("b kenari giriniz= "); scanf("%d",&b);
	printf("Dikdörtgenin cevresi= %d\n",cevrebul(a,b));
	printf("Dikdörtgenin alani=%d",alanbul(a,b)); 
}
