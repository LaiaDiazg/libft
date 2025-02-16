/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 13:54:41 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-10-15 13:54:41 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (*lst)
	{
		while (*lst)
		{
			ptr = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = ptr;
		}
	}
	*lst = NULL;
}
