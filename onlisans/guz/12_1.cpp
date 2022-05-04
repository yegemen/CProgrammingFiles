#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a;
    srand(time(NULL));
	printf("dizinin eleman sayisini giriniz: ");
    scanf("%d",&a);
	int s['a'];
	for(int i=0;i<a;i++)
	{
		s[i]=rand()%10+5;
        printf("Dizi=%d\n",s[i]);
	}
}
