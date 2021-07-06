#include <unistd.h> 

void ft_putchar(char c) {
	write(1, &c, 1);	
}

void ft_print_alphabet(void) {
	char c = 122;
	while(c != 96) {
		ft_putchar(c);
		--c; 
	}
}

int main() {
	ft_print_alphabet();
}
