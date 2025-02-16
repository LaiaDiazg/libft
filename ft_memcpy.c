/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 17:32:51 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-16 17:32:51 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			l;
	unsigned char	*str;
	unsigned char	*dst;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!src && !dest && n > 0)
		return (0);
	l = 0;
	while (l < n)
	{
		dst[l] = str[l];
		l++;
	}
	return (dest);
}
