#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int v1[5],v2[5],j,suma[5];
	for(j=0;j<=5;j++)
		{
			printf("\nDame un valor para el vector 1\n");
			scanf("%d",&v1[j]);
		}
	for(j=0;j<5;j++)
	{
		printf("Dame un valor para el vector 2\n");
		scanf("%d",&v2[j]);
	}
	for(j=0;j<5;j++)
		{
			suma[j]=v1[j]+v2[j];
			printf("La suma es de:%d\n",suma[j]);
		}
	system("pause");
	return 0;
}
