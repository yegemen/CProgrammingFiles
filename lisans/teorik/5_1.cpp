#include <stdio.h>
#include <conio.h>

int main()
{
	double a[]={2.0,-1.2,3.4,2.6,-0.3};
	void *p=a;
	printf("%p\n",p);
	printf("%p\n",(double*)p+1);
	printf("%.2f ",*(double*)p);
	printf("%.2f ",*((double*)p+1));
	printf("%.2f ",*((double*)p+2));
	printf("%.2f ",*((double*)p+3));
	printf("%.2f ",*((double*)p+4));
	getch();
}
