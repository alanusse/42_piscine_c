/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:53:28 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/12 13:01:56 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	i;
	int	next;
	int	tmp;

	step = 0;
	while (step < size)
	{
		i = 0;
		while (i < size - 1)
		{
			next = i + 1;
			if (tab[i] > tab[next])
			{
				tmp = tab[next];
				tab[next] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		step++;
	}
}
