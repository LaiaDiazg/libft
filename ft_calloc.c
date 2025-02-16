/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 13:21:48 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 13:21:48 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// The memory is set to zero
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*sz;

	sz = malloc(nmemb * size);
	if (!sz)
		return (NULL);
	ft_bzero(sz, (nmemb * size));
	return (sz);
}
