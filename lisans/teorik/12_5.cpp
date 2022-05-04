#include <stdio.h>
#include <conio.h>

int main()
{
	struct nokta{ int x,y;};
	struct dortgen{	
		struct nokta kose1, kose2;}d1={{20,8},{10,6}};
	struct dortgen d2={10,4,0,6};
	
	puts("1. Dortgen");
	printf("Kose noktalari: (%d, %d) - (%d, %d)\n",d1.kose1.x,d1.kose1.y,d1.kose2.x,d1.kose2.y);
	puts("2. Dortgen");
	printf("Kose noktalari: (%d, %d) - (%d, %d)",d2.kose1.x,d2.kose1.y,d2.kose2.x,d2.kose2.y);
}
