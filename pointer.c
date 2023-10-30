#include <stdio.h>

int main()
{
	int a;
	int* pa = NULL;
	char* pc = NULL;

	int arr[10] = {0};
	int index = 0;

	//pointer size and pointer point data size
	pa = &a;
	pc = &a;

	a = 0x11223344;
	printf("%x\n",a);

	a = 0x11223344;
	printf("%x\n",a);
	*pa = 0x0;
	printf("%x\n",a);

	a = 0x11223344;
	printf("%x\n",a);
	*pc = 0x0;
	printf("%x\n",a);

	//array different pointer type step size
	pa = arr;
	pc = arr;
	
	for(index = 0; index < 10; index++) {
		*pa++ = 0xffffffff;
	}

	printf("----------init using pa------------\n");
	for(index = 0; index < 10; index++) {
		printf("%x\n",arr[index]);
	}

	for(index = 0; index < 10; index++) {
		*pc++ = 0x11;
	}

	printf("----------init using pc------------\n");
	for(index = 0; index < 10; index++) {
		printf("%x\n",arr[index]);
	}
}
