/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:47:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 17:12:46 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = start;
	if (s == NULL)	
		return (0);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (j < (len + start))
		s2[i++] = s[j++];
/*	while (s[i])
	{
		if (i >= start && j < len)
		{
			s2[j] = s[i];
			j++;
		}
		i++;
	}*/
	s2[i] = '\0';
	return (s2);
}

/*int	main()
{
	char *str = NULL;
	char *bullshit;

	bullshit = (char *)&str[30];
	bullshit = "FULL BULLSHIT";
	printf("%s\n", ft_substr("BONJOUR LES HARICOTS !", 25, 25));
	return (0);
}*/
