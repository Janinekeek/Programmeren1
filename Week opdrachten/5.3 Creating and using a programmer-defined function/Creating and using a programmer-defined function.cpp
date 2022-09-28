// Fig. 5.3: fig05_03.c
// Creating and using a programmer-defined function.
#include <stdio.h>

int square (int y); // Function prototype

int main(void)
{
	// Loop 10 times and calculate and output square of x each time
	for (int x = 1; x <= 10; ++x) {
		printf("%d ", square(x)); // function call
	}

	puts("");
}

// Square function definition returns the square of its parameter
int square(int y) // y is a copy of the argument to the function
{
	return y * y; // Returns the square of y as an int
}