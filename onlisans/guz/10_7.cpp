//rand(); rastgele sayi üreten fonksiyon
//srand(); baslangic sayisini kendimiz vermek icin
//formül= bitis degeri-baslangic degeri+1+baslangic degeri

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{                      
	int a,b,c,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
	srand(time(NULL)); //sistem saatine göre sayi alir.
	for(a=0;a<10;a++)
	{
		b=rand();
		c=b%6+1; //1 ile 6 arasinda almasi icin..
		printf("%d----%d----%d\n",a,b,c);
		if(c==1)
		{
        	s1=s1+1;
		}
		if(c==2)
		{
        	s2=s2+1;
		}
		if(c==3)
		{
        	s3=s3+1;
		}
		if(c==4)
		{
        	s4=s4+1;
		}
		if(c==5)
		{
        	s5=s5+1;
		}
		if(c==6)
		{
        	s6=s6+1;
		}
	}
    printf("\n 1.sayi=%d,,\n 2.sayi=%d,,\n 3.sayi=%d,,\n 4.sayi=%d,,\n 5.sayi=%d,,\n 6.sayi=%d,,",s1,s2,s3,s4,s5,s6);
}