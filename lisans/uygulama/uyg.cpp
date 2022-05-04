#include <stdio.h>
#include <conio.h>


struct TARIH{
	int yil, ay, gun;
};

void TARIHDegisimi(struct TARIH t1, struct TARIH t2) //void TARIHDegisimi(struct TARIH t1, struct TARIH t2, struct TARIH *fark) 
{	
	printf("TARIH farki: %d:%d:%d - %d:%d:%d = ",t1.yil,t1.ay,t1.gun,t2.yil,t2.ay,t2.gun);
	printf("%d:%d:%d",t2.yil-t1.yil,t2.ay-t1.ay,t2.gun-t1.gun);
}

int main()
{
	struct TARIH baslangic, bitis;
		
	printf("Baslangic Tarihi Giriniz:\n yil, ay ve gun :");
	scanf("%d/%d/%d",&baslangic.yil,&baslangic.ay,&baslangic.gun);
	printf("Bitis Tarihi Girin:\n yil, ay ve gun :");
	scanf("%d/%d/%d",&bitis.yil,&bitis.ay,&bitis.gun);
	
	TARIHDegisimi(baslangic,bitis);
	
}
