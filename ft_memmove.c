/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 17:32:54 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-16 17:32:54 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (dst > str)
		while (n-- > 0)
			dst[n] = str[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
