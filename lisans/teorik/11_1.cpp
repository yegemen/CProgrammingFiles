#include <stdio.h>
#include <conio.h>

int main()
{
	enum fakulte {bm,ksm,eem,mim,im,mm};
	enum fakulte muhendislik=bm;
	switch(muhendislik)
	{
		case bm: printf("Bilgisayar Muhendisligi\n");
		break;
		case ksm: printf("Kimya Surec Muhendisligi\n");
		break;
		case eem: printf("Elektrik Elektronik Muhendisligi\n");
		break;
		case mim: printf("Makine imalat Muhendisligi\n");
		break;
		case im: printf("insaat Muhendisligi\n");
		break;
		case mm: printf("Malzeme Muhendisligi\n");
		break;
		default: printf("Fakultede boyle bir bolum yok!\n");
	}
	
}
