#include <stdio.h>
#include <conio.h>

//kullanıcıdan 3 farklı bilgi, kitapadı, yazarı, konusu, kitapid

struct kitap{
		char kitapadi[100];
		char kitapyazari[50];
		char kitapkonu[50];
		int kitapid;
	};
struct kitap bilgi;
int main()
{
	printf("kitap adini girin: ");gets(bilgi.kitapadi);
	printf("kitap yazarini girin: ");gets(bilgi.kitapyazari);
	printf("kitap konusunu girin: ");gets(bilgi.kitapkonu);
	printf("kitap id girin: ");scanf("%d",&bilgi.kitapid);
	
	printf("\n Kitap Adi: %s, \n Kitap Yazari: %s, \n Kitap Konusu: %s, \n Kitap ID: %d",bilgi.kitapadi,bilgi.kitapyazari,bilgi.kitapkonu,bilgi.kitapid);
}
