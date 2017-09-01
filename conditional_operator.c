// C program to demonstrate the working of conditional operator.
#include <stdio.h>
int main(){
	char February ;
	int days;
	printf("If this year is leap year, enter 1. If not enter any integer :");
	scanf("%c", &February);
	
	days = (February == '1') ? 29 : 28; //	If (February == '1') is True, days equal to 29 else days equal to 28.

	printf("Number of days in February = %d\n", days);
	return 0;
}
