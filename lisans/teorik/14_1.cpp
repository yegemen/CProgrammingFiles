#include <stdio.h>
#include <conio.h>
#include <math.h>

struct nokta{
	float x;
	float y;
};

struct nokta veri_al(){
	struct nokta yeni;
	puts("noktanin koordinatlari: ");
	scanf("%f %f",&yeni.x,&yeni.y);
	return yeni;
}

int main()
{
	float uzaklik;
	struct nokta A=veri_al();
	struct nokta B=veri_al();
	uzaklik=sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
	printf("Noktalar arasi uzaklik: %.2f",uzaklik);
}

