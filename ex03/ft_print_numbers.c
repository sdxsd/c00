/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/09 11:31:33 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/11 14:42:07 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	*numbers;
	int		counter;
	char	num;

	counter = 0;
	numbers = "0123456789";
	while (counter != 10)
	{
		num = numbers[counter];
		ft_putchar(num);
		++counter;
	}	
}
