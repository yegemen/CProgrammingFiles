#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a;
    srand(time(NULL));
	int s[1000];
	printf("dizinin eleman sayisini giriniz: ");
    scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		s[i]=rand()%10+5;
		printf("Dizi=%d\n",s[i]);
	}
}
