/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:33:43 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024/06/27 11:33:55 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// dst: Destination string.
// src: Source string.
// size: Total size of the destination buffer (including the null terminator).
//-> functions return the total length of the string they tried to create
//-> it will append at most
// size - strlen(dst) - 1 bytes, NUL-terminating the result
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_dst;
	size_t	length_src;
	size_t	i;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (length_dst >= size)
		return (size + length_src);
	i = 0;
	while (src[i] && (i + length_dst < size - 1))
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (length_dst + length_src);
}

/*
#include <stdio.h>

int	main(void) {
char	dst[] = "Hello";
char	src[] = "World";
printf("Result: %i%s\n", ft_strlcat(dst, src, 80), dst);  // Result: "HelloWor"
return (0);
}*/
