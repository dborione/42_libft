/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:07:34 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 17:15:47 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_free_str(const char *str)
{
	free((void *)str);
}

char	*ft_rev_string(char *s1)
{
	char	tmp;
	char	*start;
	char	*end;
	char	*s2;
	int		len;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	s2 = ft_strdup(s1);
	start = malloc(sizeof(char) * (len + 1));
	if (!start)
		return (0);
	start = s2;
	end = malloc(sizeof(char) * (len - 1));
	if (!end)
		return (0);
	end = s2 + (len - 1);
	if (len > 1)
	{
		while (start < end)
		{
			tmp = *start;
			*start = *end;
			*end = tmp;
			start++;
			end--;
		}
	}
	//free(start);
	//free(end);
	free(s1);
	return (s2);
}
			
int	ft_strtrim_start(char const *s1, char const *set)
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
//	ft_free_str(s1);
	s2 = ft_rev_string((char *)s2);

	j = ft_strtrim_start(s2, set);
	s2 = ft_substr(s2, j, ft_strlen(s2));
	s2 = ft_rev_string((char *)s2);

	s3 = malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	s3 = ft_strdup(s2);
	
//	ft_free_str(s2);
	return ((char *)s3);
}

/*int	main()
{
//	char *s1 = "bonjourv";
//	char *set = "b";

	char *s2 = "tripouille   xxx";	
	printf("%s\n", ft_strtrim(s2, " x"));

	return (0);
}*/
