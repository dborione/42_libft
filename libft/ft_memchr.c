/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:20:17 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:31 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
//	const char *s2;

	i = 0;
//	s2 = (const char*)s;
	while (i < n)
	{
		i++;
		if (((const char *)s)[i] == c)
			return ((void *)s);
	}
	return (0);
}

int	main()
{
	char *str = "dddd";
//	int	c = 't';

	memchr(str, 't' + 256, 3);
	ft_memchr(str, 'd', 3);
	return (0);
}
