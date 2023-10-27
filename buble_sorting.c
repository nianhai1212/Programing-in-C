#include <stdio.h>

#define ARR_SIZE 1000

int main()
{
	int arr[ARR_SIZE] = {0};
	int random = 0;

	int index;

	int i = 0; 
	int j = 0;
	int tmp = 0;
	for(index = 0; index < ARR_SIZE; index++) {
		random = rand()%255;
		arr[index] = random;
		printf("arr is %d\n",arr[index]);
	}

	for(i = 0; i < ARR_SIZE-1; i++) {
		for(j = 0; j < ARR_SIZE - i - 1; j++) {
			if(arr[j] < arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for(index = 0; index < ARR_SIZE; index++) {
		printf("arranged arr is %d\n",arr[index]);
	}

	return 0;

}
