/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:11:35 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 17:25:05 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		*lst = new;
	if (lst)
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

/*int	main(void)
{
	t_list	*lst;
	t_list	**lst2;

	*lst = ft_lstnew("ex");
	lst2 = ft_lstnew(lst);
	ft_lstadd_front(lst2, lst);
	printf("%s\n", lst->content);
	return (0);
}*/
