// Program for printing ASCII value of character.
#include <stdio.h>
int main() {
	char chr;						// Declare character.
	printf("Enter a character : ");				
	scanf("%c", &chr);					// Ask user to eneter the character.
	printf("You entered = %c\n", chr);			// When %c fromat is used, it displays the character.
	printf("ASCII value of %c is %d\n", chr, chr);		// When %d format is used, it displays the ASCII value.
	return 0;
}
