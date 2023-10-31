#include <stdio.h>

int main()
{
	int a = 0;
	int* pa = NULL;
	int* * ppa = NULL;

	int arr[10] = {0};

	int* arr[5] = {0};

	pa = &a;
	ppa = &pa;

	printf("%p\n%p\n%p\n",&a,pa,ppa);

	**ppa = 100;
	printf("%d\n%d\n%d\n",a,*pa,**ppa);

}
