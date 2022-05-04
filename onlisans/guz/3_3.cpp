#include <stdio.h>

main(){
int a,b;
printf("a yi gir=");
scanf("%d",&a);
printf("b yi gir=");
scanf("%d",&b);

if(a>b)
printf("a büyüktür b den.");
else if(a==b)
printf("a ve b esittir.");
else
printf("b büyüktür a dan");

}