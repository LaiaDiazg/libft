/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 13:24:57 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 13:24:57 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*init;

	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	init = str;
	while (*s)
	{
		*str = *s;
		str++;
		s++;
	}
	*str = '\0';
	return (init);
}
