/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:46:34 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/20 16:05:15 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL ((void *)0)

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *ptr;
    char *nul;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if (str[i] == to_find[0])
        {
            j = 0;
            ptr = &str[i];
            while(to_find[j] == str[i + j])
            {
                if (to_find[j + 1] == '\0')
                {
                    return (ptr);
                }
                j++;
            }
        }
        i++;
	}
	return (NULL);
}

/*
int main () {
   char haystack[20] = "holaMund0Mundo";
   char needle[10] = "mundo";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
*/
