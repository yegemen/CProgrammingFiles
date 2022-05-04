#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char dersler[6][20] = {"Programlama","Veritabani",
						   "Elektronik","Matematik",
						   "Fizik","Veri Yapilari"};
	for(int i=0;i<6;i++)
	{
		for(int j=0;dersler[i][j]!='\0';j++)
			printf("%c",dersler[i][j]);
		printf("\n");
	}
	
}
