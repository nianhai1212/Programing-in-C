#include <stdio.h>

#define ROW 3
#define	COL 3

int main()
{
	char arr[ROW][COL] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};	

	int index = 0;
	int* parr = NULL;

	int i = 0;
	int j = 0;

	printf("%p\n",arr);
	printf("%p\n",&arr[0][0]);
	printf("%p\n",arr[0]);

	printf("%c\n",arr[0][0]);
	printf("%c\n",*arr[0]);
	printf("%c\n",**arr);

	for(index = 0; index < ROW*COL; index++) {
		printf("%c\n",*(*arr+index));
	}

	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%c\n",arr[i][j]);
		}
	}

	return 0;
}
