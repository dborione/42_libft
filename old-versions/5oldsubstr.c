/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5oldsubstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:49:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 15:51:18 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			s2[j] = s[i];
			j++;
		}
		i++;
	}
	s2[j] = '\0';
	return (s2);
}

int	main()
{
	printf("%s\n", ft_substr("", 5, 0));
	return (0);
}
