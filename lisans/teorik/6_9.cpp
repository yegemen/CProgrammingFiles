#include <stdio.h>
#include <conio.h>

int main()
{
	const int boyut=7;
	int notlar[boyut]={25,40,5,95,50,65,45};
	
	int toplam=0;
	
	for(int i=0;i<boyut;i++)
	{
		toplam+=notlar[i];
	}
	float ort=(float)toplam/boyut;
	printf("Toplam=%d, Ortalama=%.2f",toplam,ort);
}
