//Calculate the product of three integers
#include <stdio.h>

int main(void)
{
	printf("Enter three integers: "); 
	
	int x, y, z; //declare variables
	scanf_s("%d%d%d , &x &y &z "); //read three integers
	
	int result = x * y * z; // multiply the values
	printf(" The product is %d\n", result); //display the result

} //end fuction main