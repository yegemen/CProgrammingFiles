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

float uzaklik_hesapla(struct nokta nokta1, struct nokta nokta2)
{
	float uzaklik;
	uzaklik=sqrt(((nokta1.x-nokta2.x)*(nokta1.x-nokta2.x))+((nokta1.y-nokta2.y)*(nokta1.y-nokta2.y)));
	return uzaklik;
	// return sqrt(((nokta1.x-nokta2.x)*(nokta1.x-nokta2.x))+((nokta1.y-nokta2.y)*(nokta1.y-nokta2.y)));
}

int main()
{
	struct nokta n1;
	struct nokta n2;
	n1=veri_al();	
	n2=veri_al();
	printf("n1 icin x = %f , y = %f \n",n1.x,n1.y);
	printf("n2 icin x = %f , y = %f \n",n2.x,n2.y);
	float uzaklik=uzaklik_hesapla(n1,n2);
	printf("Noktalar arasi uzaklik: %.2f",uzaklik);
}

