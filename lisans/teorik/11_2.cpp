#include <stdio.h>
#include <conio.h>

int main()
{
	enum uzanti {edu=1,com,org,mil,gov,net,ac};
	enum uzanti google=com;
	switch(google)
	{
		case 1: puts("Egitim Kurumlari");
		break;
		case 2: puts("Ticari Kuruluslar");
		break;
		case 3: puts("Ticari Olmayan Kuruluslar");
		break;
		case 4: puts("Askeri Kurumlar");
		break;
		case 5: puts("Hukumet Kurumlari");
		break;
		case 6: puts("Servis Sunuculari");
		break;
		case 7: puts("Akademik Kuruluslar");
		break;
		default: puts("Yeni kullanima acilmis alan adi olabilir.");
	}
}
