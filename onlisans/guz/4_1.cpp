#include <stdio.h>
main(){
int hafta,gun,gun2;
printf("gun giriniz= ");
scanf("%d",&gun);
hafta=(gun/7)+1;
gun2=gun%7;
switch(gun2)
{
	case 1:printf("%d. haftanin %d. günü pazartesi",hafta,gun2);break;
	case 2:printf("%d. haftanin %d. günü sali",hafta,gun2);break;
	case 3:printf("%d. haftanin %d. günü çarsamba",hafta,gun2);break;
	case 4:printf("%d. haftanin %d. günü persembe",hafta,gun2);break;
	case 5:printf("%d. haftanin %d. günü cuma",hafta,gun2);break;
	case 6:printf("%d. haftanin %d. günü cumartesi",hafta,gun2);break;
	case 0:printf("%d. haftanin %d. günü pazar",hafta-1,gun2+7);break;
}
}