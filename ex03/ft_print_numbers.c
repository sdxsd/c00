/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/09 11:31:33 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/09 11:31:36 by wmaguire      ########   odam.nl         */
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
	char	numbers[10];
	int		counter;
	int		iterator;
	char	num;

	iterator = 0;
	counter = 0;
	while (iterator <= 10)
		numbers[iterator] = iterator;
	while (counter != 10)
	{
		num = numbers[counter];
		ft_putchar(num);
		++counter;
	}	
}
