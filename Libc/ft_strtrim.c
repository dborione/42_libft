/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/18 18:32:28 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

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

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	char const		*s2;
	char const		*s3;

	s2 = NULL;
	if (s1 == NULL || set == NULL)
		return (0);
	i = ft_strtrim_start(s1, set);
	s2 = ft_substr(s1, i, ft_strlen(s1));
	s2 = ft_rev_string((char *)s2, ft_strlen(s2));
	j = ft_strtrim_start(s2, set);
	s2 = ft_substr(s2, j, ft_strlen(s2));
	ft_rev_string((char *)s2, ft_strlen(s2));

	s3 = malloc(sizeof(char) * (ft_strlen(s2) - (i + j)));
	if (!s3)
		return (0);
	s3 = s2;

//	s2 = malloc(ft_strlen(s1) + 1);
/*	s2 = malloc(sizeof(char) * (ft_strlen(s1) - (i + j)));
	if (!s2)
		return (0);*/

	return ((char *)s3);
}

/*int	main()
{
//	char *s1 = "bonjourb";
//	char *set = "b";

	char *s2 = "   \t  \n\n \t\t   Hello \t  Please\n Trim me !\n   \n \n \t\t\n  ";	
	printf("%s\n", ft_strtrim(s2, " \t\n"));

	return (0);
}*/
