#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v1[5],v2[5],i,suma[5];
	for(i=0;i<=5;i++)
		{
			printf("\nDame el valor del vector 1\n");
			scanf("%d",&v1[i]);
			printf("\n");
		}
		
	for(i=0;i<5;i++)
	{
		printf("Dame el valor del vector 2 en la posicion %d\n");
		scanf("%d",&v2[i]);
		printf("\n");
	}
	
	for(i=0;i<5;i++)
		{
			suma[i]=v1[i]+v2[i];
			printf("La suma es de:%d\n",suma[i]);
		}
	system("pause");
	return 0;
}
