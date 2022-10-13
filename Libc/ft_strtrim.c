/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:40:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 15:22:21 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*s2;
	
	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	s1_len = ft_strlen(s1);
//	s2 = ft_strdup(s1);
	while (s1[i])
	{
		while (s2[i] == set[j])
		{
			i++;
			j++;
		}
		malloc(sizeof(char));
		j = 0;
		i++;
	}
	i = 0;
	while (i < s1_len && s2[i] == '\0')
		i++;
	return (&s2[i]);
}

int	main()
{
	char *s1 = "abecde";
//	char const *set = "ae";

	printf("%s\n", ft_strtrim(NULL, s1));
	return (0);
}*/
