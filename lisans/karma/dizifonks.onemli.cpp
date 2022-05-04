#include <stdio.h>

void degerdegis(int dizi[])
{
	dizi[0]+=1;
	dizi[1]+=1;
}

int main()
{
	int a[2]={1,2};
	printf("a[0]=%d, a[1]=%d\n",a[0],a[1]);
	degerdegis(a);
	printf("a[0]=%d, a[1]=%d",a[0],a[1]);
	
	//yani fonksiyona dizi gönderirsek kopyasýn deðil adresini gönderiyormuþuz.
}
