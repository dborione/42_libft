/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 17:31:50 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*char *ft_tab(char const *s, char c)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char) * ((ft_strlen(s) * 2) + 1));
	if (!tab)
	{
		free(tab);
		return (0);
	}
	while (s[j])
	{
		tab[i] = s[j];
		tab[i + 1] = c;
		i = i + 2;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_tab(char const *s, char c)
{
	char	*ptr;

	while (s[i])
	{
		if (str[i] == c)
			ptr = ft_substr(s, i, ft_strlen(s));
		i++;
	}
	return (ptr);
}*/

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**tab[j];

//	*ptr = malloc(sizeof(*ptr) * (sizeof(
	i = 0;
	j = 0;
	while (tab[j])
	{
		while (s[i])
		{
			while (s[i] == c)
			{
				s = ft_substr(s, i, ft_strlen(s));
				tab[i][j] = s; 
				j++;
				i++;
			}
			i++;
		}
		j++;
	}
	tab[i][j] = '\0';
	return (*tab);
}


int	main()
{
	char const *s = "exemple";
	char c = 'e';

	printf("%s\n", ft_split(s, c));
	return (0);
}
