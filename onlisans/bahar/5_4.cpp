#include <stdio.h>
#include <math.h>

int main()
{
	int i=0;
	printf("1 ile 10 arasýndaki sayilarin kökü\n\n");
	for(i=1;i<=10;i++)
		printf("karekök %d = %.3f\n",i,sqrt(i)); //%.3f virgülden sonra kaç basamak gösterecegidir.
}
//sqrt(a) karekök
//pow(x,y) üs alma
//abs(a) |a|
