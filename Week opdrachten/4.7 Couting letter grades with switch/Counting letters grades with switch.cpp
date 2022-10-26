// Fig. 4.7: fig04_07.c
// Counting letter grades with switch.
#include <stdio.h>

int main(void)
{
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	unsigned int cCount = 0;
	unsigned int dCount = 0;
	unsigned int fCount = 0;

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	int grade; // One grade
	
	// Loop until user types end-of-file key sequence
	while ((grade = getchar()) != EOF)
	{

		// Determine which grade was input
		switch (grade) { // Switch nested in while
		
		case 'A': // Grade was uppercase A
		case 'a': // or lowercase a
			++aCount;
			break; // Necessary to exit switch

		case 'B': // Grade was uppercase B
		case 'b': // or lowercase b
			++bCount;
			break; 

		case 'C': // Grade was uppercase C
		case 'c': // or lowercase c
			++cCount;
			break;

		case 'D': // Grade was uppercase D
		case 'd': // or lowercase d
			++dCount;
			break;

		case 'F': // Grade was uppercase F
		case 'f': // or lowercase f
			++fCount;
			break;

		case '\n': // Ignore newline,
		case '\t': // Tabs,
		case ' ': // And spaces in input
			break; 

		case 'EOF':
			break;

		default: // Catch all other characters 
			printf("%s", "Incorrect letter grade entered.");
			printf("%d debug", grade);
			puts("Enter a new grade.");
			break; // Optional; will exit switch 
		}
	} // End while

	// Output summary of results
	puts("\nTotals for each letter grade are:");
	printf("A: %u\n", aCount);
	printf("B: %u\n", bCount);
	printf("C: %u\n", cCount);
	printf("D: %u\n", dCount);
	printf("F: %u\n", fCount);
}