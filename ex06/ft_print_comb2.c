#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char c);
void two_char(char one, char two);

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

void two_char(char one, char two) 
{
	ft_putchar(one);
	ft_putchar(two);
}

void ft_print_comb(void) 
{
	char digits[10] = "0123456789";
	int iterator, iterator2;
	iterator = iterator2 = 0;
	char a_char, b_char;
	while(iterator <= 9) 
	{
		iterator2 = 0;
		while(iterator2 <= 9) 
		{
			if(iterator == iterator2) 
				;
			else if(iterator > iterator2)
				;
			else {
				a_char = digits[iterator];
				b_char = digits[iterator2];
				two_char(a_char,b_char);
				ft_putchar(',');
			}
			++iterator2;
		}
		++iterator; 
	}
}

int main() {
	ft_print_comb();
	return 0;
}

