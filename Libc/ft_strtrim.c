/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:07:34 by dborione          #+#    #+#             */
/*   Updated: 2022/10/26 17:10:28 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strtrim_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

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

size_t	ft_strtrim_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			i = 0;
			j--;
		}
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	i = ft_strtrim_start(s1, set);
	if (i == ft_strlen(s1))
		s2 = ft_substr(s1, i, 0);
	else
	{
		j = ft_strtrim_end(s1, set);
		s2 = ft_substr(s1, i, (j - i + 1));
	}
	return (s2);
}

/*int	main()
{
	char *s1 = "  ";
	char *set = " ";
	printf("%s\n", ft_strtrim(s1, set));

	return (0);
}*/
