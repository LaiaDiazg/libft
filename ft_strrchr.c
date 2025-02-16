/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-18 15:58:11 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-18 15:58:11 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// First return: we return the memory address where the last occurrence was
//found
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
