/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 17:32:57 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-16 17:32:57 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	if (size > 0)
	{
		l = 0;
		while (l < (size - 1) && src[l] != '\0')
		{
			dst[l] = src[l];
			l++;
		}
		dst[l] = '\0';
	}
	return (ft_strlen(src));
}
