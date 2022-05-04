#include <stdio.h>
#include <conio.h>

int kupu_al(int a)
{
	int sonuc=a*a*a;
	return sonuc;
}

int main()
{
	int s=7;
	printf("fonksiyonun adresi=%p\n",kupu_al);
	printf("s' nin kupu=%d\n",kupu_al(s));
	int (*p)(int);
	p=kupu_al;
	printf("fonksiyonun adresi=%p\n",p);
}
