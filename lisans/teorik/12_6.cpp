#include <stdio.h>
#include <conio.h>

typedef struct ucak{
	char model_no[5];
	char uretici[30];
};

typedef struct zaman{
	int saat,dakika;
};

typedef struct tarih{
	int gun,ay,yil
};

struct ucus{
	char ucus_no[10];
	ucak ucak_bilgi;
	char gidis[20],gelis[20];
	zaman kalkis_saati, varis_saati;
	tarih ucus_tarihi;
};

int main()
{
	int i=0;
	puts("Ozel ucus sirketinin ucak bilgileri");
	ucak ucus_sirket[4]={"Boeing","B727","BOEÝNG,"}	
}
