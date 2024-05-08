#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m1[5][5],m2[5],m3[5],[x],[y];
	
	printf("Dame los valores de la primera matriz de [5x5]");
		for(x=1;x<=3;x++)
			 for(y=1;y<=3;y++)
			 {
			 	printf("\n Introduce el valor de [%d][%d] :",x,y);
			 	scanf("%d",&m1[x][y]);
			 }
			 	printf("Dame los valores de la segunda matriz de [5x5]");
		for(x=1;x<=3;x++)
			 for(y=1;y<=3;y++)
			 {
			 	printf("\n Introduce el valor de [%d][%d] :",x,y);
			 	scanf("%d",m2[x][y]);
			 }
			 
			 for(x=1;x<=3;x++)
			 	for(y=1;y<=3;y++)
			 		m3[x][y]=(m1[x][1]*m2[1][y]+m1([x][2]*m2[2][y])+(m1[x][3]*m2[3][y]);
			 		
		for(x=1;x<=3;x++)
		{
			 for(y=1;y<=3;y++)
			 	printf(" %d ",m3[x][y]);
			 	printf("\n");
		}
		
		system("pause");
}
