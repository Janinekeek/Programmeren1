// Fig. 5.11: fig05_11.c
// Shifted, scaled random integers produced by 1 + rand () % 6.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Loop 20 times
	for (unsigned int i = 1; i <= 20; ++i) {

		// Pick random number from 1 to 6 and output it
		printf("%10d", 1 + (rand() % 6));

		// If counter is divisible by 5, begin new line of output
		if (i % 5 == 0) {
			puts(""); 
		}
	}
}