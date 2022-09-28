// Exercises 5.9 Car rental service

#include <stdio.h>

int hours;
int rent(int hours);


int main(void)
{
	printf("Input the rent duration in hours: x");
	scanf_s("%d", &hours);
	printf("the rent is %d", rent(hours));

}

int rent(int hours)
{
	
	int rent = 25;
	hours -= 8;
	if (hours < 0) {
		hours = 0;
	}
	rent += hours*5;

	return rent;
}
