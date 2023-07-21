/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:47:22 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/16 20:28:56 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	right;
	int	left;

	counter = 0;
	while (counter < size / 2)
	{
		right = tab[(size - 1) - counter];
		left = tab[counter];
		tab[counter] = right;
		tab[(size - 1) - counter] = left;
		counter++;
	}
}
