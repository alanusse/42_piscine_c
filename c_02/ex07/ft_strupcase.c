/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:28:57 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/17 11:51:29 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	a_uppercase;
	char	a_lowercase;

	a_uppercase = 'A';
	a_lowercase = 'a';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = a_uppercase + (str[i] - a_lowercase);
		}
		i++;
	}
	return (str);
}
