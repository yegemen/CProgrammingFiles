#include <stdio.h>
#include <conio.h>

int main()
{
	enum yaz {haziran=6,temmuz,agustos};
	
	for(int i=haziran;i<=agustos;i++)
		printf("%d ",i);
	printf("\n %d byte",sizeof(yaz));
	
	enum yaz a=temmuz; // enum yaz a=7 olmaz.
	printf("%d",a);
	
}
