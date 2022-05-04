#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	struct nokta{
		float x;
		float y;};
	struct nokta A,B;
	float uzaklik;
	puts("A noktasinin koordinatlarini giriniz: ");
	scanf("%f %f",&A.x,&A.y);
	puts("B noktasinin koordinatlarini giriniz: ");
	scanf("%f %f",&B.x,&B.y);
	
	uzaklik=sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
	printf("Noktalar arasi uzaklik: %.2f",uzaklik);
}
