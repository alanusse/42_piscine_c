/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:52:07 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/17 11:57:00 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	a_uppercase;
	char	a_lowercase;

	a_uppercase = 'A';
	a_lowercase = 'a';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = a_lowercase + (str[i] - a_uppercase);
		}
		i++;
	}
	return (str);
}
