#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
 int a,b,hak=3;
 srand(time(NULL));
 b=rand()%5+1;
 printf("rastgele sayi= %d",b);
 do{
 printf("\ntahmin giriniz: ");
 scanf("%d",&a);
 if(a==b)
 {
 	printf("bildiniz.");
 }
 else
 {
 	printf("bilemediniz.");
 }
 hak--;
 }
 while(hak>0 && a!=b);
 printf("\n güle güle..");
}