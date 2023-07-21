/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:18:47 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/13 11:00:37 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char hundred, char ten, char unit)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unit, 1);
	if (hundred < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_comb_loop(char hundred, char ten, char unit)
{
	while (hundred <= '7')
	{
		ft_print_numbers(hundred, ten, unit);
		if (unit == '9')
		{
			if (ten == '8')
			{
				hundred++;
				ten = hundred + 1;
			}
			else
			{
				ten++;
			}
			unit = ten + 1;
		}
		else
		{
			unit++;
		}
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	ten = '1';
	unit = '2';
	ft_comb_loop(hundred, ten, unit);
}
