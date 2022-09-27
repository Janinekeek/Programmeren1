// Fig. 5.4: fig05_04.c
// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y, int z); // Function protoytype

int main(void)
{
	int number1; // First integer entered by user
	int number2; // Second integer entered by user
	int number3; // Third integer entered by user

	printf("%s", "Enter three integers:");
	scanf_s("%d%d%d", &number1, &number2, &number3);

	// Number1, Number2 and Number3 are arguments
	// To the maximum function call
	printf("Maximum is: %d\n", maximum(number1, number2, number3));
}
// Function maximum definition
// x, y and z are parameters
int maximum(int x, int y, int z)
{
	int max = x;  // Assume x is largest

	if (y > max) { // If y is larger than max,
		max = y; // Assign y to max
	}

	if (z > max) { // If z is larger than max,
		max = z; // Assign z to max
	}

	return max; // max is largest value
}