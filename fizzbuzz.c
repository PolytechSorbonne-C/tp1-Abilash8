#include <stdio.h>
#include <stdlib.h>

int main (){
	int i;
	for (i=0; i<101;i++)
	{
		if ((i%3)==0 || ((i%10)==3))
		{
			printf("fizz ");
		}
		else if ((i%7)==0 || ((i%10)==7))
		{
			printf("buzz ");
		}
		else 
		{
			printf("%d ",i);
		}
	}
	return 0;
}

