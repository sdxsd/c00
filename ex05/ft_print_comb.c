

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_threech(char one, char two, char three);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	threech(char one, char two, char three)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(three);
}

char	int_to_char(int one, int two, int three)
{
	char	digits[10];
	char	c_one;
	char	c_two;
	char	c_three;
	int		char_iter;

	while (char_iter <= 10)
	{
		digits[char_iter] = char_iter;
	}
	c_one = digits[one];
	c_two = digits[two];
	c_three = digits[three];
	threech(c_one, c_two, c_three);
}

void	ft_print_comb(void)
{
	int		iterator;
	int		iterator2;
	int		iterator3;

	iterator = 0;
	iterator2 = 0;
	iterator3 = 0;
	while (iterator <= 9)
	{
		iterator2 = 0;
		while (iterator2 <= 9)
		{
			iterator3 = 0;
			while (iterator3 <= 9)
			{
				if (iterator == iterator2 || iterator2 == iterator3 || iterator3 == iterator)
					;
				else if (iterator > iterator2 || iterator2 > iterator3)
					;
				else
				{
					int_to_char	(iterator,iterator2,iterator3);
					ft_putchar(',');
				}
				iterator3++;
			}
			++iterator2;
		}
		++iterator; 
	}
}