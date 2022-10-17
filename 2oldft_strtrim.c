/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 14:23:01 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int ft_strtrim_start(char const *s1, char const *set, unsigned int i, unsigned int j)
{
	while (set[j])
	{
		while (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		j++;
	}
				printf("%u\n", i);
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
			{
				printf("%zu\n", i);
				return (i);
			}
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
	char const	*s2;
//	char const	*s3;

	i = ft_strtrim_start(s1, set, 0, 0);;
	j = ft_strtrim_end(s1, set, (ft_strlen(s1) - 1), 0);
	if (s1 == NULL || set == NULL)
		return (0);
	s2 = malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (0);

	s2 = ft_substr(s1, i, (ft_strlen(s1) - j));

//	s3 = ft_strdup(s2);
//	i = ft_strlen(s1) - 1;
//	j = ft_strlen(set) - 1;
//	((char *)s3)[i] = '\0';
//	return ((char *)s3);
//	((char *)s2)[i] = '\0';
	 return ((char *)s2);
}

int	main()
{
	char s1[] = "abbbcdeab";
	char const set[] = "ab";

	printf("%s\n", ft_strtrim(s1, set));
//	printf("%s\n", ft_strtrim_end(s1, set, (ft_strlen(s1) - 1), 0));

	return (0);
}
