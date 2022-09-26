// Fig. 2.13: fig02_13.c
// Using if statements, relational
// operators, and equality operators.
#include <stdio.h>

//Function main begins program execution
int main(void)
{
	printf("Enter two integers, and I will tell you\n "); 
	printf("the relationship they statisfy: ");

	int num1; //First number to read from user
	int num2; //Second number to be read from user

	scanf_s("%d %d", &num1, &num2); //Read two integers

	if (num1 == num2) {
		printf("%d is equal to % d\n", num1, num2);
	} // End if

	if (num1 != num2) {
		printf("%d is not equal to % d\n", num1, num2); 
	} // End if

	if (num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
		} // End if

	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2); 
		} // End if

	if (num1 <= num2) {
		printf("%d is less than or equal to %d\n", num1, num2);
		} // End if

	if (num1 >= num2) {
		printf("%d is greater than or equal to %d\n", num1, num2);
		} // End if
} // End function main