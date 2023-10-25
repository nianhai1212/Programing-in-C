#include <stdio.h>
/*
 *Caculate n!
*/

int main()
{
	int num = 0;
	int index = 0;
	int factorial = 1;

	scanf("%d",&num);
	printf("%d factorial is %d\n",num,factorial);

	for(index = 1; index <= num; index++) {
		factorial = factorial * index;
		printf("factorial is %d\n",factorial);
	}

	printf("%d factorial is %d\n",num,factorial);

	return 0;
}
