#include <stdio.h>

main()
{
	int a=45;
	float b=4.5;
	char c='a';
	printf("a icerigi=%d \n",a);
	printf("b icerigi=%f \n",b);
	printf("c icerigi=%c \n",c);

	printf("a degiskenin bellekteki adresi=%x\n",&a);
	printf("b degiskenin bellekteki adresi=%x\n",&b);
	printf("c degiskenin bellekteki adresi=%p\n",&c);
}

