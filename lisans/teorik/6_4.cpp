#include <stdio.h>
#include <conio.h>

int p_kupu_al(int *a)
{
	int sonuc=(*a)*(*a)*(*a);
	return sonuc;
}

int main()
{
	int s=7;
	printf("fonksiyonun adresi=%p\n",p_kupu_al);
	printf("s' nin kupu=%d\n",p_kupu_al(&s));
	int (*pf)(int*);
	pf=p_kupu_al;
	printf("fonksiyonun adresi=%p\n",pf);
}
