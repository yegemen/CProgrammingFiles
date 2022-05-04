#include <stdio.h>
#include <conio.h>

struct kisi{
	char ad[50];
	char cinsiyet;
	int yas;
	float boy, kilo;
};
struct kisi a;

float idealKilo(int yas, float boy, char cinsiyet)
{
	int idealkilo;
	if(cinsiyet=='e')
		idealkilo = (boy-100+yas/10)*0.9;
	if(cinsiyet=='k')
		idealkilo = (boy-100+yas/10)*0.8;
	
	return idealkilo;
}

int main()
{
	printf("Ad: ");gets(a.ad);
	printf("Yas: ");scanf("%d",&a.yas);
	printf("Boy: ");scanf("%f",&a.boy);
	printf("Cinsiyet: ");scanf("%s",&a.cinsiyet);
	printf("Kilo: ");scanf("%f",&a.kilo);
	float idkilo=idealKilo(a.yas,a.boy,a.cinsiyet);
	printf("idealKilo: %f\n", idkilo);
	
	if(a.kilo>idkilo)
		printf("ideal kilodan fazlasiniz.");
	if(a.kilo<idkilo)
		printf("ideal kilodan dusuksunuz");
	if(a.kilo==idkilo)
		printf("ideal kilodasiniz.");
}
