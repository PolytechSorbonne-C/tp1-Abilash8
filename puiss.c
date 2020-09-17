#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	float x,xm;
	int k;
	
	if (argc != 3)
	{
		fprintf(stderr, "indiquer la valeur à élever à la puissance:%s <x> <k>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	x=atoi(argv[1]);
	k=atoi(argv[2]);
	xm=x;
	if (k!=0)
	{
		for (int i=1; i<=(k-1); i++)
		{
			xm=xm*x;
		}
	printf("%f puissance %d = %0.3f\n",x,k,xm);
		
	}
	else
	{
		printf("%f puissance %d = 1 \n",x,k);
	}
	return 0;
}


