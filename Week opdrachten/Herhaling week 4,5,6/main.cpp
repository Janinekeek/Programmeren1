// Herhaling afgelopen weken van arrays, pointers en functies


#include <stdio.h>

void pasArrayaan(int[], int lengte);
void printArray(int a[], int lengte);  //  

int main(void) {
	int a[5] = {0 ,2 ,4 ,6 ,8};    // Als je int a [5] = {0} schrijft dan worden alle waardes van A 0. Schrijf je int a [5] = {0,2,4,6,8} schrijft de functie 0 2 4 6 8
	//printf ("%d \n , a) 

	int* p;     // p is pointer 
	p = a;     // Pointer is gelijk aan array
	p += 4;   // Pointer gaat nu plus 4 


	//for (int i = 0; i < 5; i++) {
		//printf("%d ", *p);
		//p--;    // De pointer zal nu aftellen
	//}

	pasArrayaan(a, 5);
	 printArray(a, 5);
	 // printf("\n%d", *p);     // Is voor pointer als je pointer en array samen wilt printen
	
}

void pasArrayaan(int a[], int lengte) {
	for (int i = 0; i < 5; i++) {
		a[i] *= 3;		// Gaan alle waardes keer 3 
	}
}

void printArray(int a[], int lengte) {
	for (int i = 0; i < lengte; i++) {
		printf("%d ", a[i]);
	}
}