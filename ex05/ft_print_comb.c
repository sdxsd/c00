/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/09 11:12:41 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/09 11:27:12 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_threech(char one, char two, char three);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	ft_putchar(c_one);
	ft_putchar(c_two);
	ft_putchar(c_three);
}

int	validity(int one, int two, int three)
{
	if (one == two || two == three || three == one)
		return (1);
	else if (one > two || two > three)
		return (1);
	else
		return (0);
}

void	calc_nums(int iter, int iter2, int iter3)
{
	while (iter <= 9)
	{
		iter2 = 0;
		while (iter2 <= 9)
		{
			iter3 = 0;
			while (iter3 <= 9)
			{
				if (validity(iter, iter2, iter3))
				{
					int_to_char (iter, iter2, iter3);
					ft_putchar(',');
				}
				++iter3;
			}
			++iter2;
		}
		++iter;
	}
}

void	ft_print_comb(void)
{
	int		iter;
	int		iter2;
	int		iter3;

	calc_nums(iter, iter2, iter3);
}
