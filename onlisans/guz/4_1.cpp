#include <stdio.h>
main(){
int hafta,gun,gun2;
printf("gun giriniz= ");
scanf("%d",&gun);
hafta=(gun/7)+1;
gun2=gun%7;
switch(gun2)
{
	case 1:printf("%d. haftanin %d. g�n� pazartesi",hafta,gun2);break;
	case 2:printf("%d. haftanin %d. g�n� sali",hafta,gun2);break;
	case 3:printf("%d. haftanin %d. g�n� �arsamba",hafta,gun2);break;
	case 4:printf("%d. haftanin %d. g�n� persembe",hafta,gun2);break;
	case 5:printf("%d. haftanin %d. g�n� cuma",hafta,gun2);break;
	case 6:printf("%d. haftanin %d. g�n� cumartesi",hafta,gun2);break;
	case 0:printf("%d. haftanin %d. g�n� pazar",hafta-1,gun2+7);break;
}
}