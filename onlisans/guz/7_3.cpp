#include <stdio.h>
main()
{
	int a,b,yuk,gen;
	char y='y';
	printf("yazilacak harf gir= ");
	scanf("%c",&y);
	printf("yükseklik gir= ");
	scanf("%d",&yuk);
	printf("genislik gir= ");
	scanf("%d",&gen);
	for(a=0;a<yuk;a++)
	{
		for(b=0;b<gen;b++)
		printf("%c",y);
        printf("\n");
	}

}
