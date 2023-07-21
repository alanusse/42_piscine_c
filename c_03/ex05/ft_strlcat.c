/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:47:21 by aglanuss          #+#    #+#             */
/*   Updated: 2023/07/20 20:51:42 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0' && i < size - 1)
    {
        /* If next slot is NULL, start to concatenate the src string into dest string */
        if (dest[i + 1] == '\0')
        {
            while(src[j] != '\0')
            {
                dest[i + j + 1] = src[j];
                j++;
            }
        }
        i++;
    }
    return (i + j);
}
 
int main() { 
    char *s = "hello duplicates"; 
    char target[128] = "target buffer#"; 
     
    printf("Hello World: \"%s\"\n", target); 
    
    unsigned int foo = ft_strlcat(target, s, sizeof(target)); 
    
    printf("New target: \"%s\"\n", target); 
 
    return 0; 
}
