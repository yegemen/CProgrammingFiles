#include <stdio.h>
#include <conio.h>

typedef struct dogum_bilgileri{
	int gun, ay, yil;
};

typedef struct kisi{
	char ad[50];
	int boy;
	dogum_bilgileri d1;
};

int main()
{
	kisi kisi1;
	printf("Adiniz: ");
	scanf("%s",kisi1.ad);
	printf("Boyunuz: ");
	scanf("%d",&kisi1.boy);
	printf("Dogum Tarihi: ");
	scanf("%d/%d/%d", &kisi1.d1.gun,&kisi1.d1.ay,&kisi1.d1.yil);
	
	printf("Girilen Bilgiler:\n");
	printf("Isim: %s\n",kisi1.ad);
	printf("Boy: %d\n",kisi1.boy);
	printf("Dogum Tarihi: %d/%d/%d",kisi1.d1.gun,kisi1.d1.ay,kisi1.d1.yil);
}
