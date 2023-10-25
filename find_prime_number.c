#include <stdio.h>

/*
  number which is greater than 1 and not divided by other numbers remind 0 but itself
*/
int is_prime_num(int num)
{
	int index = 0;
	for(index = 2; index < num; index++)
	{
		if(num % index == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 500;
	int index = 0;

	for(index = 2; index < num; index++) {
		if(1 == is_prime_num(index)) {
			printf("%d\t",index);
		}
	}
	printf("\n");

}
