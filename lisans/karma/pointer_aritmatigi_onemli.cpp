#include <stdio.h>
#include <conio.h>

int main()
{
	int a=5;
	int *p;
	p=&a;
	printf("degeri=%d, adresi=%p \n",*p,p);
	printf("degeri=%d, adresi=%p \n",++*p,p);
	printf("degeri=%d, adresi=%p \n",++(*p),p);
	printf("degeri=%d, adresi=%p \n",--*p,p);
	printf("degeri=%d, adresi=%p \n",--(*p),p);
	printf("degeri=%d, adresi=%p \n",(*p)++,p);
	printf("degeri=%d \n",*p);
	printf("degeri=%d, adresi=%p \n",*p++,p);
	printf("degeri=%d \n",*p);
	printf("degeri=%d \n",a);
	p=&a;
	printf("degeri=%d \n",*p);
	
	printf("degeri=%d, adresi=%p \n",(*p)--,p);
	printf("degeri=%d \n",*p);
	printf("degeri=%d, adresi=%p \n",*p--,p);
	printf("degeri=%d \n",*p);
	printf("degeri=%d \n",a);
	p=&a;
	printf("degeri=%d \n",*p);
	
	
	printf("degeri=%d, adresi=%p \n",*++p,p);
	printf("degeri=%d \n",*p); 
	
	printf("degeri=%d, adresi=%p \n",*--p,p);
	printf("degeri=%d \n\n",*p); 
	/* dizilerde sonraki-önceki adrese gidip değerini yazdırmak.
	
	printf("degeri=%d, adresi=%p \n",*++p,p);
	printf("degeri=%d \n",*p); 
	
	*/
	
	int dizi[]={1,2,3};
	int *s=&dizi[1];
	printf("degeri= %d \n",*s+*s);
	printf("degeri= %d \n",--*s);
	printf("%d\n",*s);
	printf("degeri= %d",*++s);
	

}
