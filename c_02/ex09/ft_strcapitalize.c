/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:17:22 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/18 15:27:35 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	a_uppercase;
	char	a_lowercase;

	a_uppercase = 'A';
	a_lowercase = 'a';
	*str = a_uppercase + (*str - a_lowercase);
	return (str);
}

char	*ft_strlowcase(char *str)
{
	char	a_uppercase;
	char	a_lowercase;

	a_uppercase = 'A';
	a_lowercase = 'a';
	*str = a_lowercase + (*str - a_uppercase);
	return (str);
}

int	ft_char_is_alphanumeric(char str)
{
	if (str < 'a' || str > 'z')
	{
		if (str < 'A' || str > 'Z')
		{
			if (str < '0' || str > '9')
			{
				return (0);
			}
		}
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				ft_strlowcase(&str[i]);
			}
			else if (!ft_char_is_alphanumeric(str[i - 1]))
			{
				ft_strupcase(&str[i]);
			}
		}
		i++;
	}
	return (str);
}
