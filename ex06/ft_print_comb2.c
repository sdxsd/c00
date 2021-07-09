/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/09 11:58:39 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/09 13:47:52 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int one, int two)
{
	ft_putchar((one / 10) + '0');
	ft_putchar((two / 10) + '0');
	ft_putchar(',');
}

int	valcheck(int one, int two)
{

}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		while (num2 <= 99)
		{
			++num2;
			int_to_char(num1, num2);
		}
		++num1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
