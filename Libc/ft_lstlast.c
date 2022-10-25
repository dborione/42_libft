/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:07:28 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 17:10:45 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*trav;

	if (!lst)
		return (NULL);
	trav = lst;
	while (trav->next)
		trav = trav->next;
	return (trav);
}

/*int	main()
{
	t_list	*new;
	new = ft_lstnew("ex");
	printf("%s\n");
	ft_lstlast(new);
	return (0);
}*/
