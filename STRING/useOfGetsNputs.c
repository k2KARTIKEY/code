#include <stdio.h>
void main() {
	char name[50];
	printf("Enter your name : ");
	// Read name using gets()
	gets(name);
	printf("Your name is : ");
	// Display name using puts()
	puts(name);
}