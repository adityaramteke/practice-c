// C program for demostrate the working of logical operators.
#include <stdio.h>
int main() {
	int a = 5, b = 5, c = 10, result;
	
	result = (a == b) && (a > c);
	printf("(a == b) && (a > c) equals to %d\n", result);
	
	result = (a == b) && (a < c);
	printf("(a == b) && (a < c) equals to %d\n", result);
	
	result = (a == b) || (a > c);
	printf("(a == b) || (a > c) equals to %d\n", result);
	
	result = (a == b) || (a < c);
	printf("(a == b) || (a < c) equals to %d\n", result);
	
	result = !(a != b);
	printf("!(a != b) equals to %d\n", result);
	
	result = !(a == b);
	printf("!(a == b) equals to %d\n", result);
	
	return 0;
}
