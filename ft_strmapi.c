/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 09:41:52 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-26 09:41:52 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	char	*str;

	l = ft_strlen(s);
	str = (char *)malloc((l + 1));
	if (!str)
		return (NULL);
	l = 0;
	while (s[l] != '\0')
	{
		str[l] = f(l, s[l]);
		l++;
	}
	str[l] = '\0';
	return (str);
}
