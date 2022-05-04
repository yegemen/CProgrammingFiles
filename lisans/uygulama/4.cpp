#include <stdio.h>
#include <conio.h>

int main()
{
	int dizi[] = {10, 5, -5, 4, 2};
	int *a = &dizi[2]; //int pointer 4 byte.
	printf("%d ", *a); //pointer in gösterdiði adresteki deðeri yazdýrmak için önüne yýldýz koyuyoruz.
	printf("adres %p \n",a);
	printf("%d ",--*a);
	printf("adres %p \n",a);
	printf("%d ",*++a);
	printf("adres %p \n",a);
	printf("%d ",*a++);
	printf("adres %p \n",a);
	getchar();
}
