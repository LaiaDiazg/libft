/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-24 16:51:00 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-24 16:51:00 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	iter(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			counter;
	long int	num;

	num = n;
	counter = iter(n);
	s = (char *)malloc(sizeof(char) * (counter + 1));
	if (!s)
		return (NULL);
	s[counter] = '\0';
	if (num < 0)
	{
		num *= (-1);
		s[0] = '-';
	}
	else
		s[0] = '+';
	while (counter-- > 1)
	{
		s[counter] = (num % 10) + '0';
		num /= 10;
	}
	if (s[0] == '+')
		s[counter] = (num % 10) + '0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(45));
	return (0);
}
*/
