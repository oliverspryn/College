#include <stdio.h>

void bubble_sort(int *data, int count);
int data[] = {1, 3, 9, 4, 2, 7, 8, 5, 6, 10};

int main() {
	bubble_sort(data, 10);

	/*
	Y86 will not include the printf() code
	
	int i;
	bubble_sort(data, 10);
	
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	
	printf("\n");
	*/
	
	return 0;
}

void bubble_sort(int *data, int count) {
	int i, last;
	
	for (last = count - 1; last > 0; last--) {
		for (i = 0; i < last; i++) {
			if (*(data+(i + 1)) < *(data+i)) {
				int t = *(data+(i + 1));
				*(data+(i + 1)) = *(data+i);
				*(data+i) = t;
			}
		}
	}
}
