/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/18 17:36:11 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*char	*ft_substr2(char const *s, unsigned int start, size_t end)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	s2 = malloc(end + 1);
	if (s2 == NULL)
		return (0);
	while (s[i])
	{
		if (i >= start && j < end)
		{
			s2[j] = s[i];
			j++;
		}
		i++;
	}
	s2[j] = '\0';
	return (s2);
}*/

char	*ft_rev_string(char *s1, int len)
{
	int		i;
	char	tmp;

	i = 0;
	if (!s1)
		return (0);
	if (len > 1)
	{
		while (i < (len / 2))
		{
			tmp = s1[i];
			s1[i] = s1[(len - 1) - i];
			s1[(len - 1) - i] = tmp;
			i++;
		}
	}
	return (s1);
}

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
	while (j <= 0)
	{
		while (s1[i] == set[j])
		{
			i--;
			j = ft_strlen(set)-1;
		}
		j--;
	}
	return (i);

/*	while (i >= 0)
	{
		while (s1[i] != set[j])
		{
			j--;
			if (j <= 0)
				return (i);
		}
		i--;
		j = ft_strlen(set) - 1;
	}
	return (0);*/
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			j;
	char const		*s2;

	if (s1 == NULL || set == NULL)
		return (0);

	i = ft_strtrim_start(s1, set);
	s2 = ft_substr(s1, i, ft_strlen(s1));
	printf("%s\n", s2);

	ft_rev_string((char *)s2, ft_strlen(s2));
	printf("%s\n", s2);
	j = ft_strtrim_start(s2, set);
	s2 = ft_substr(s2, j, ft_strlen(s2));
	printf("%s\n", s2);

	ft_rev_string((char *)s2, ft_strlen(s2));
	printf("%s\n", s2);

//	j = ft_strtrim_end(s1, set, ft_strlen(s1) -1, ft_strlen(set)-1);
	printf("%u\n", i);
	printf("%zu\n", j);
	if (i == 0 && j < 0)
		return ((char *)s1);
	s2 = malloc (sizeof(char) * ft_strlen(s1));
	if (!s2)
		return (0);
//	s2 = ft_substr(s1, i, ft_strlen(s1) - i);
	return ((char *)s2); 
}

int	main()
{
	char s1[] = "ab";
	char *set = "b";

//	printf("%s\n", ft_rev_string(s1, ft_strlen(s1)));
	printf("%s\n", ft_strtrim(s1, set));
//	printf("%zu\n", ft_strtrim_end(s1, set, (ft_strlen(s1) - 1), 0));


	return (0);
}
