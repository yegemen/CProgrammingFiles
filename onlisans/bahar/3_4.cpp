#include <stdio.h>
#include <string.h>
int cevre(int a)
{
	return 2*3*a;
}
int alan(int a)
{
	return 3*(a*a);
}
main()
{
int r,secim;
printf("yaricap giriniz= ");
scanf("%d",&r);
printf("cevre icin 3, alan icin 4 giriniz= ");
scanf("%d",&secim);
switch(secim)
{
	case 3: printf("Cemberin Cevresi= %d",cevre(r)); break;
        case 4: printf("Cemberin Alani= %d",alan(r)); break;
}
}
