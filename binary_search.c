#include <stdio.h>

#define SIZE 10

int main() 
{
	int array[SIZE] = {0};
	int index = 0;

	int left = 0;
	int right = 0;
	int mid = 0;

	int num = 0;
	int not_found = 0;

	scanf("%d",&num);

	for(index = 0; index < SIZE; index++) {
		array[index] = index;
		printf("element is %d\n",array[index]);
	}

	//for(index = 0; index < SIZE; index++) {
	//	if(num == array[index]) {
	//		printf("Find %d in array %d\n",num,index);
	//	}
	//}
	//
	left = 0;
	right = SIZE-1;
	mid = (left+right)/2;

	not_found = 0;
	while(num != array[mid]) {
		if(num > array[right] || num < array[left]) {
			not_found = 1;
			printf("given data out of range of array range!\n");
			break;
		}

		if(num > array[mid]) {
			left = mid;
			mid = (left+right)/2;
		}
		else if(num < array[mid]) {
			right = mid;
			mid = (left+right)/2;
		}
	}

	if(not_found == 0) {
		printf("Find %d in array %d\n",num,mid);
	}
	
	return 0;
}
