/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:21:37 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024/06/25 17:21:41 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;
	int				aux;

	aux = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n && aux == 0)
	{
		aux = c1[i] - c2[i];
		if (!c1[i] || !c2[i])
			return (aux);
		i++;
	}
	return (aux);
}
