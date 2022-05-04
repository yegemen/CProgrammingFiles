#include <stdio.h>

int main()
{
	int *ptr,i;
	printf("ptr nin adresi %p\n",&ptr);
	printf("ptr nin adresi %p\n",ptr);
	printf("ptr nin degeri %d\n",ptr);
	ptr=&i;
	printf("ptr nin degeri %p\n",ptr);
	ptr=ptr+2;
	printf("ptr nin degeri %p\n",ptr);
	int *p;
	int dizi[2]={1,2};
	p=dizi;
	printf("dizi[0]=%d",p[1]);
}
