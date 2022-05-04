#include <stdio.h>
#include <conio.h>

int main()
{
	struct uye{
		char isim[10];
		int yas;
		float boy, kilo;
	}grup[2];
	
	for(int i=0;i<2;i++)
	{
		printf("%d.uye, ad yas boy kilo girin:",i+1);
		scanf("%s %d %f %f",grup[i].isim,&grup[i].yas,&grup[i].boy,&grup[i].kilo);
	}
	puts("uye adi\t yas\t boy\t kilo\n");
	for(int i=0;i<2;i++)
	{
		printf("%s \t%d \t%.2f \t%.2f \n",grup[i].isim,grup[i].yas,grup[i].boy,grup[i].kilo);
	}
}

