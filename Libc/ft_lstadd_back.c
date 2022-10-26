/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:11:35 by dborione          #+#    #+#             */
/*   Updated: 2022/10/26 10:59:43 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else if (lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*tmp;

	lst = ft_lstnew("ex");
	new = ft_lstnew("lol");
	ft_lstadd_back(&lst, new);
	if (new)
	{
		tmp = lst;
		tmp = tmp->next;
		printf("%s\n", tmp->content);
	}
	return (0);
}*/
