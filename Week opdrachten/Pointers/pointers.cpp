#include <stdio.h>


int main(void) {

	int a[] = { 1, 23, 22, 44 ,76, 15, 232, 88 };					// creates array with length 8
	int *p, *p1;													// int is used to create two pointers

	printf("memory location a[0] = %d\n", &a[0]);					// prints the memory location of a[0] 
	printf("value location a[0] = %d\n\n", *&a[1]);					// prints the actual value of a[0]

	p = a;															// gives p the value of array a[0] in memory
	printf("pointer location a[0]= %d\n", p);						// see above
	printf("value location a[0]= %d\n\n", *p);						// see above

	p1 = &a[5];														// geeft pointer p1 de waarde van de geheugen locatie a[5]
	printf("pointer location a[5]= %d\n", p1);						// see above
	printf("Value location a[5]= %d\n\n", *p1);						// see above


	printf("Delta pointers p1(a[5]) -p(a[0]) = %d\n\n", p1 - p);	// Berekent verschil tussen twee pointers

	printf("moving cursor through whole array a using a for loop\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {				// for loop die de lengte van de gehele array omvat
		printf("%d\n", *p);
		p++;														// moves pointer to next location in array

	}

}