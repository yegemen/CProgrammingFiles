#include <stdio.h>
int a=9;
int b=6;
int fonksiyonY(void){
a--;b++;printf("%d,%d\n",a,b);
return a+b;
}
void fonksiyonX(int a,int b)
{
a++;b--;printf("%d,%d\n",a,b);
}
main()
{
int a=3,b=5;
printf("%d,%d\n",a,b);
a++;b++;
fonksiyonX(a,b);
printf("%d\n\n",fonksiyonY());
return 0;
}
