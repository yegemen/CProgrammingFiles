#include <stdio.h>
#include <conio.h>

int main()
{
	const int boyut=7;
	int notlar[boyut]={25,40,5,95,50,65,45};
	int *ptr[boyut];
	for(int i=0;i<boyut;i++)
	{
		ptr[i]=&notlar[i];
	}
	printf("%d",*ptr[0]);
}
