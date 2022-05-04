#include <stdio.h>
#include <conio.h>

struct nokta_3d{
	int x,y,z;
	char adi;
}A[2]={{1,2,3,'s'},{4,5,6,'m'}};

int main()
{
	printf("A[0]in elemanlari = %d %d %d %c",A[0].x,A[0].y,A[0].z,A[0].adi);
}
