/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:58:40 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 10:06:40 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*trav;

	trav = lst;
	i = 0;
	if (!lst)
		return (0);
	while (trav)
	{
		trav = trav->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	void	*ptr = NULL;
	ft_lstnew(ptr);
	return (0);
}*/
