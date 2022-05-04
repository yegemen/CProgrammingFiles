#include <stdio.h>
#include <conio.h>

int *fact(int x)
{
	int sonuc=1;
	for(int i=1;i<=x;i++) //for(x;x>=1;x--)
	{
		sonuc*=i; //sonuc*=x;
	}
	return &sonuc;
}

int main()
{
	int a;
	int *p;
	printf("Sayi gir= ");
	scanf("%d",&a);
	p=fact(a);
	printf("%d!=%d, adresi: %p",a,*p,p);
	getch();
}
