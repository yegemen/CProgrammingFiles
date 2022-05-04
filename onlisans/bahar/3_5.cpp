#include <stdio.h>
#include <string.h>
int cevrebul(int a){
return 2*3*a;
}
int alanbul(int a){
int alan;
alan=3*a*a;
return alan;
}
main()
{
	int a,c;
	printf("yaricap giriniz= "); scanf("%d",&a);
	printf("cevre icin 3, alan icin 4 giriniz= "); scanf("%d",&c);
	if(c==3)printf("Cemberin cevresi= %d",cevrebul(a));
	else if(c==4)printf("Dairenin alani= %d",alanbul(a));
        else printf("seciminiz hatali !!!");
}
