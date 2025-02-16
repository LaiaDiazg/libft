/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-24 16:48:01 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-24 16:48:01 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordamount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**ft_substrmaker(char const *s, char c, char **array)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			array[j] = ft_substr(s, start, (i - start + 1));
			if (!array[j])
			{
				ft_free(array);
				return (0);
			}
			j++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = malloc(sizeof(char *) * (ft_wordamount(s, c) + 1));
	if (!array || !s)
		return (NULL);
	array = ft_substrmaker(s, c, array);
	return (array);
}
