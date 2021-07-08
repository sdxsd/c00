#include <unistd.h> 

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c != 123)
	{
		ft_putchar(c);
		++c;
	}
}
