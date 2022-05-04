#include <stdio.h>
#include <conio.h>

int main()
{
	double x=-2.1;
	double y=0.34;
	double *p=NULL;
	double **p2=NULL;
	printf("x:%.2f, y:%.2f\n",x,y);
	p=&x;
	*p=2.8;
	printf("x:%.2f, y:%.2f\n",x,y);
	p2=&p;
	printf("x:%.2f, y:%.2f\n",x,y);
	*p2=&y;
	*p=20;
	printf("x:%.2f, y:%.2f\n",x,y);
	
	**p2=6.8;
	printf("x:%.2f, y:%.2f\n",x,y);
}
