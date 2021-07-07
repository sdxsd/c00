#include <unistd.h>

void ft_putchar(char c);
void ft_is_negative(int n);

void ft_putchar(char c) {
	write(1, &c, 1);
}

// The function for verifying whether an integer is negative or positive. 
// ft_is_negative is supplied an argument hereforth referred to as "n"
// The function first checks whether integer n is below 0 using the left facing arrow bracket. 
// if n is below zero, then n is negative. 
// if n is not below zero, then n is a positive integer and so there is no need for another if statement. 

void ft_is_negative(int n) {
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
