#include <stdio.h>

int topla(int *a,int N)
{
	int toplam=0;
	for(int i=0;i<N;i++)
	{
		toplam+=*(a+i); // +=a[i];
	}
	return toplam;
}

int main()
{
	int urun_adet[10];
	for(int i=0;i<10;i++)
	{
		printf("%d. kutuda: ",i+1);
		scanf("%d",(urun_adet+i)); //scanf("%d",&urun_adet[i]);
	}
	printf("urunlerin toplami=%d",topla(urun_adet,10));
}
