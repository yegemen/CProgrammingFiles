#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char *donem="Guz/Bahar Donemi"; //char donem[]
	puts(donem);
	
	char *dersler[20] = {"Programlama","Veritabani", //char dersler[][20]
						 "Elektronik","Matematik",
						 "Fizik","Veri Yapilari"};
	
	for(int i=0;i<6;i++)
		printf("%d- %s\n",i+1,dersler[i]);	// dersler[i]=*(dersler+i);
}
