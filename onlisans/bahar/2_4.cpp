#include <stdio.h>
#include <stdlib.h>

main(){
	    int i,j,d=0;
	    int n[4][2];
	    for(i=0;i<4;i++)
	    {
		for(j=0;j<2;j++)
                {
		printf("[%d][%d]gir=",i,j);
		scanf("%d",&n[i][j]);
                }
	    }
	    printf("\n\n");
	    for(i=0;i<4;i++)
	    {
		for(j=0;j<2;j++)
			printf("%d-",n[i][j]);
			printf("\n");
            }

}
