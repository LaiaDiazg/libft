/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-24 16:20:12 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-24 16:20:12 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		l;

	l = ft_strlen(s1) + 1;
	str = (char *)malloc((l + ft_strlen(s2)) * sizeof(char));
	if (str == NULL)
		return (0);
	i = ft_strlcpy(str, s1, l);
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	cadena[] = "¡Hola, mundo!";
	char	cadena2[] = "¡Hola, mundo!";
	char	*c;

	c = ft_strjoin(cadena, cadena2);
	printf("%s\n", c);
	return (0);
}
*/
