// Self review opdracht 3.7
// Raise x to the y power

#include <stdio.h> 

int main(void)
{
	printf("%s", "Enter first integer:");
	unsigned int x;
	scanf_s("%u", &x); //Read value for x from user
	printf("%s", "Enter second integer: ");
	unsigned int y;
	scanf_s("%u", &y); // Read value for y from user

	unsigned int i = 1;
	unsigned int power = 1; // Set power

	while (i <= y) { // Loop while i is less than or equal to y 
		power *= x; // Multiply power by x
		++i; // Increment i 
	} // End while

	printf("%u\n", power); // Display power
} // End main function