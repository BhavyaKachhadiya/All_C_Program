#include <stdio.h>

void main()
{
	int i;


	i=1;


	printf("Even Numbers from 1 to 100:\n");

	while(i<=100)
	{
		if(i%2 == 0)
			printf("%d ",i);
		
		i++;
	}

}
