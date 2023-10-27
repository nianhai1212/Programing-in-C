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
	int flag = 0;//add flag to enhance efficency 
	for(index = 0; index < ARR_SIZE; index++) {
		random = rand()%255;
		arr[index] = random;
		printf("arr is %d\n",arr[index]);
	}

	for(i = 0; i < ARR_SIZE-1; i++) {
		flag = 1;//asume the array is ordered -- set the flag to be 1
		for(j = 0; j < ARR_SIZE - i - 1; j++) {
			if(arr[j] < arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;//if swap occured means that the array is not ordered and swaped for ordering clear the flag
			}
		}
		if (1== flag) { // after a round compare and swap if the flag is 1 still means that the array is ordred already and stop compre and swap
			break;
		}
	}

	for(index = 0; index < ARR_SIZE; index++) {
		printf("arranged arr is %d\n",arr[index]);
	}

	return 0;

}
