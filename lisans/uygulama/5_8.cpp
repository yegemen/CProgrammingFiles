#include <stdio.h>
#include <conio.h>

void EkranaYaz_Ptr(int *p,int elemanSayisi)
{
	int enb=*p;
	int eleman=0;
	for(int i=0; i<elemanSayisi;i++)
	{
		if(*p>enb)
		{
			enb=*p;
			eleman=i;
		}
		p++; //Bir sonraki adrese git.
	}
	printf("En buyuk eleman: %d %p\n",enb, p+eleman);
}

void EkranaYaz_Dizi(int dizi[], int elemanSayisi)
(
	int enb=dizi[0];
	int eleman=0;
	for(int i=1;i<elemanSayisi;i++)
	{
		if(dizi[i]>enb)
		{
				enb=dizi[i];
				eleman=i;
		}
	}
	printf("En buyuk eleman: %d %p\n",enb,&dizi[eleman]);
)

int main()
{
	int denge[5]={121,3,5,979,34};
	int *p;
	p=denge; //veya p=&denge[0];
	/*Yukarýdaki durum dizilere has bir durumdur. */
	printf("Dizinin elemanlari= %d %d %d %d %d", *p,*(p+1),*(p+2),*(p+3),*(p+4));
	/* *(p+5)' de dizinin elemaný bulunmamaktadýr.
	Bu yüzden o adreste ne varsa ekrana o yazýlýr. */
	printf("Elemanlarin adresleri: %p %p %p %p %p\n",p,p+1,p+2,p+3,p+4);
	// Adresler hexadecimal olarak yazdýrýlmýþtýr. Decimal olarak da yazdýrýlabilir.
	EkranaYaz_Dizi(denge,5);
	EkranaYaz_Ptr(&denge[0],5); //EkranaYaz(p,5); veya EkranaYaz(denge,5);
	getchar();
	return 0;
	
}







