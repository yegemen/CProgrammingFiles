#include <stdio.h>
#include <stdlib.h>
//dýþarýdan elemanlarý girilen diziyi tekrar ekrana yazdýrma

int main()
{
	int s[10];
	for(int i=0;i<10;i++)
	{
		printf("%d. elemanini girin= ",i+1);
        scanf("%d",&s[i]);
	}
    printf("\ndisaridan girilen dizi..");
	for(int y=0;y<10;y++)
	{
    	printf("\n%d. eleman=%d",y+1,s[y]);
	}
}
