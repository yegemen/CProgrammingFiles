#include <stdio.h>
#include <stdlib.h>

main(){
	    int i,j;
	    int diziA[4][2]={ {0,1},{2,3},{4,5},{6,7} };
	    printf("diziye girilen ilk degerler\n");
	    for(i=0;i<4;i++)
	    {
            	for(j=0;j<2;j++)
		printf("%d-",diziA[i][j]);
		printf("\b\n");
            }
}
