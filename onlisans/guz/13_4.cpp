#include <stdio.h>
#include <string.h>

main()
{
int a,b,sayac=0,sayi=0;
char kelime[100],ara[3];
printf("Bir Cümle Giriniz-->");
gets(kelime);
a=strlen(kelime);
printf("Cümlede Hangi 3 Harfli Sayisini Ögrenmek istersiniz ? -->");
gets(ara);
for(b=0;b<a;b++)
  {
    if(kelime[b]==ara[0])
      {
	sayac++;
      }
   }
 for(b=0;b<3;b++)
  {
    printf("%c",ara[b]);
  } 
    printf(" Hecesinden %d Tane var",sayac);
}

