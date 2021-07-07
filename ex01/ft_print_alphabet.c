#include <unistd.h> 

// Function prototypes
void ft_putchar(char c);
void ft_print_alphabet(void);

// Homebrew putchar function
void ft_putchar(char c) {
	write(1, &c, 1);	
}

// Function for printing the alphabet.
// Character c is first declared as having the value of 97
// 97 is the ascii character code corresponding to the letter 'a'
// A while loop is used, specified to end when the value of c reaches 123.
// First the loop passes the value of c as an argument to the function ft_putchar, and then increments c by 1.

void ft_print_alphabet(void) {
	char c = 97;
	while(c != 123) {
		ft_putchar(c);
		++c; 
	}
}
