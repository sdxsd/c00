#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char c);
void ft_threech(char one, char two, char three);

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

void threech(char one, char two, char three) 
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(three);
}

void ft_print_comb(void) 
{
	char digits[10] = "0123456789";
	int iterator, iterator2, iterator3;
	iterator = iterator2 = iterator3 = 0;
	char a_char, b_char, c_char;
	while(iterator <= 9) 
	{
		iterator2 = 0;
		while(iterator2 <= 9) 
		{
			iterator3 = 0;
			while(iterator3 <= 9) 
			{
				if(iterator == iterator2 || iterator2 == iterator3 || iterator3 == iterator) 
					;
				else if(iterator > iterator2 || iterator2 > iterator3)
					;
				else {
					a_char = digits[iterator];
					b_char = digits[iterator2];
					c_char = digits[iterator3];
					threech(a_char,b_char,c_char);
					ft_putchar(',');
				}
				iterator3++;
			}
			++iterator2;
		}
		++iterator; 
	}
}

