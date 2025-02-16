/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 10:15:26 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 10:15:26 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	cadena[] = "¡Hola, mundo!";
	char	*c;

	printf("%li", s#include "libft.h"trlen(cadena));
	c = ft_substr(cadena, 6, 3);
	printf("%s\n", c);
	return (0);
}*/
