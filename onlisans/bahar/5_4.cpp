#include <stdio.h>
#include <math.h>

int main()
{
	int i=0;
	printf("1 ile 10 aras�ndaki sayilarin k�k�\n\n");
	for(i=1;i<=10;i++)
		printf("karek�k %d = %.3f\n",i,sqrt(i)); //%.3f virg�lden sonra ka� basamak g�sterecegidir.
}
//sqrt(a) karek�k
//pow(x,y) �s alma
//abs(a) |a|
