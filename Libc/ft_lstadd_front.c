/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:48:55 by dborione          #+#    #+#             */
/*   Updated: 2022/10/21 12:54:44 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	new_lst->next = *lst;
	new_lst->content = new;
}

/*int	main(void)
{
	void	*ptr = NULL;
	ft_lstnew(ptr);
	return (0);
}*/
