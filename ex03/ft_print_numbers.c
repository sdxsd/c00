#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_numbers(void) {
	char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
	int counter = 0;
	while(counter != 10) {
		char num = numbers[counter];
		ft_putchar(num);
		++counter;
	}	
}

int main() {
	ft_print_numbers();
}
