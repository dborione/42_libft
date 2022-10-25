/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:42:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 11:23:15 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(new_list));
	if (!new_list)
		return (0);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/*int	main(void)
{
	void	*ptr = NULL;
	ft_lstnew(ptr);
	return (0);
}*/
