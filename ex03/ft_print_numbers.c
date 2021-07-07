#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

void ft_putchar(char c) {
	write(1, &c, 1);
}

// Function to print numbers.
// Assuming digits = 0 to 9
// A character array is declared, named here as "numbers". 
// The character array's length is specified to be 10.
// The character array's content is enumerated on, from index 0 to index 9. Each containing the character representation of a digit. 
// An integer, hereforth called "counter" is both declared and initialised with a value equaling 0
// A while loop is opened with the condition to continue as long as counter is not equal to 10
// The character num is declared to hold the value of the integer pointed to in the array "numbers"
// The value of counter is used to index the array. For example, if counter was equal to 1, then the value of char "num" would be the character '1'
// The previously written putchar function is then supplied char "num" as an argument.
// the integer counter's value is incremented by one, and then the while loop repeats. 

void ft_print_numbers(void) {
	char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
	int counter = 0;
	while(counter != 10) {
		char num = numbers[counter];
		ft_putchar(num);
		++counter;
	}	
}
