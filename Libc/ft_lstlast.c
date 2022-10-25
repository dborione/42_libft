/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:07:28 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 12:13:43 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*trav;

	trav = lst;
	while (trav)
	{
		if (!trav->next)
			return (trav);
		trav = trav->next;
	}
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
