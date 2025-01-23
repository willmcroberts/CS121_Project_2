#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
 	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
 	printf("Before: \n");
	printValues(values);

 	/* test swap
 	int x = 3;
 	int y = 5;
 	printf("x: %d, y: %d \n", x, y);
 	swap(&x, &y);
 	printf("x: %d, y: %d \n", x, y);
	*/
 	sort(values);
 	printf("After: \n");
 	printValues(values);

	return(0);
} // end main

void printValues(int* value) {
	printf("[ ");

	for (int i = 0; i < MAX; i++){
		printf("%d ", value[i]);
	} // end of for loop
	
	printf("] \n");
} // end printValues

void swap(int* a, int* b) {
	int placer = *a;
	*a = *b;
	*b = placer;
} // end swap

void sort(int* values) {
	for (int i = 0; i < (MAX - 1); i++) {
		for (int j = 0; j < (MAX - 1); j++) {
			if (values[j] > values[j + 1]) {
				swap(&values[j], &values[j+1]);
				// printValues(values);
			} // end of if statment
		} // end of j for loop
	} // end i for loop
} // end sort
