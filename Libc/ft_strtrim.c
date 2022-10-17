/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 15:25:16 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strtrim_start(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		while (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		j++;
	}
	return (i);
}

size_t	ft_strtrim_end(char const *s1, char const *set, size_t i, size_t j)
{
	while (s1[i])
	{
		while (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				return (i);
		}
		j = 0;
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			j;
	char const		*s2;

	if (s1 == NULL || set == NULL)
		return (0);
	i = ft_strtrim_start(s1, set);
	j = ft_strtrim_end(s1, set, (ft_strlen(s1) - 1), 0);
	printf("%u\n", i);
	printf("%zu\n", j);
	if (i == 0 && j < 0)
		return ((char *)s1);
	s2 = malloc (sizeof(char) * ft_strlen(s1));
	if (!s2)
		return (0);
	s2 = ft_substr(s1, i, (j - (i - 1)));
	return ((char *)s2);
}

int	main()
{
	char *s1 = "abb";
	char *set = "b";

	printf("%s\n", ft_strtrim(s1, set));
//	printf("%s\n", ft_strtrim_end(s1, set, (ft_strlen(s1) - 1), 0));

	return (0);
}
