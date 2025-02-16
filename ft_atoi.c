/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:17:05 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024/07/04 13:17:17 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
isspace()
	checks for white-space characters.  In the "C" and  "POSIX"  lo‐
	cales,  these are: space, form-feed ('\f'), newline ('\n'), car‐
	riage return ('\r'), horizontal tab  ('\t'),  and  vertical  tab ('\v').
*/
static int	ft_isspace(char a)
{
	if ((a == ' ') || (a == '\f') || (a == '\n') || (a == '\r') || (a == '\t')
		|| (a == '\v'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]) == 1 && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "        -aa";
	int		i;

	i = ft_atoi(a);
	printf("%i", i);
	return (0);
}
*/
