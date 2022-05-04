#include <stdio.h>
#include <string.h>
main(){
 int a,b,h,sayac=0;
 char kelime[100],hece[3];
 printf("cümle gir=");
 gets(kelime);
 a=strlen(kelime);
 printf("Cümlede Hangi 3 Harfli Hecenin Sayisini Ögrenmek istersiniz=");
 gets(hece);
 h=strlen(hece);
 for(b=0;b<a;b++)
 {
 if(kelime[b]==hece[0] && kelime[b+1]==hece[1] && kelime[b+2]==hece[2])
 {
 sayac++;
 }
 }
 if(sayac==0)
 {
  	printf("%c%c%c Hecesinden Hiç Yok",hece[0],hece[1],hece[2]);
 }
 else
 {
 	printf("%c%c%c Hecesinden %d Tane var",hece[0],hece[1],hece[2],sayac);
 }
}