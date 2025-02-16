/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 09:25:00 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-10-13 09:25:00 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	l;

	l = 0;
	if (!(!s && !f))
	{
		while (s[l] != '\0')
		{
			f(l, &s[l]);
			l++;
		}
	}
}
