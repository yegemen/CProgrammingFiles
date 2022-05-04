#include <stdio.h>
#include <string.h>

main()
{
	int a,b,d,k,m=0,sayac=0,c=0;
	char kelime[100],yedek[100];
	int sayac1[100];
	printf("Bir Cümle Giriniz=");
	gets(kelime);
	k=strlen(kelime);
	for(a=0;a<k;a++){
		for(d=0;d<=c;d++)
                {
		if(kelime[a]==yedek[d])
		{
                	m++;
		}
                }
		if(m==0)
		{
			for(b=a;b<k;b++)
			{
				if(kelime[a]==kelime[b])
				{
                                	sayac++;
                                }
			}
			yedek[c]=kelime[a];
			sayac1[c]=sayac;
			sayac=0;
			c++;
		}
                m=0;
	}
	for(a=0;a<c;a++)
	{
        	printf("%c Harfinden %d Tane var.\n",yedek[a],sayac1[a]);
        }
}