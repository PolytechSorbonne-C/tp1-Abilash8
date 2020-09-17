#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	float x,y,rep;
	
	int p=0,n=0, val;
	if (argc != 2)
	{
		fprintf(stderr, "indiquer le nb d'itération : %s <itération>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	val=atoi(argv[1]);
	
	for (int i=0; i<val;++i) {
    x = (rand()/(RAND_MAX+1.0));
	y = (rand()/(RAND_MAX+1.0));
	n++;
    if (x*x + y*y <= 1) p++;
}
	rep=(4.0*p)/n;
	printf("%f \n",rep);
	return 0;
}

