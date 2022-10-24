/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/24 19:02:18 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_tab_len(const char *ptr, char c)
{
	unsigned long	i;
	int				j;
	int				count;

	i = 0;
	j = 0;
	count = 0;
	if (c == '\0')
		return (1);
	while (i < ft_strlen(ptr))
	{
		while (ptr[i] != c)
		{
			i++;
			if (ptr[i] == c)
			{
				count++;
				j = i;
			}
		}
		j++;
		i++;
	}
	return (count);
}

static char	**ft_fill_tab(char **tab, const char *s, char *ptr, char c)
{
	size_t	i;
	int	j;
	int	x;
	
	i = 0;
	j = 0;
	x = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				ptr = ft_substr(s, j, i - j);
				tab[x] = ptr;
				x++;
				j = i;
			}
		}
		j++;
		i++;
	}
	tab[x] = NULL;
	return (tab);
}

static char	**ft_count_zero(char **tab, const char *s, char *ptr, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab = malloc(sizeof(*tab));
			if (!tab)
				return (NULL);
			tab[0] = NULL;
			return (tab);
		}
		i++;
	}
	tab = malloc(sizeof(*tab) * 2);
	if (!tab)
		return (NULL);
	tab[0] = ptr;
	tab[1] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*ptr;
	int		count;

	if (!s)
		return (NULL);
	tab = NULL;
	ptr = NULL;
	count = 0;
	if (ft_strlen(s) == 0)
		return (ft_count_zero(tab, s, ptr, c));
	ptr = ft_strdup(s);
	count = ft_tab_len(s, c);
	tab = malloc(sizeof(*tab) * (count + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill_tab(tab, s, ptr, c);
	free(ptr);
	return (tab);
}

/*int	main()
{
	const char *s = "jregjl kljfls jfdlks";
	char **tab = ft_split(s, ' ');
	if (!s)
	{
		//free(tab);	
		return (0);
	}
	
	unsigned long 	i = 0;
	int		j = 0;
//	printf("%lu\n", sizeof(tab[50]));
	//printf("%lu\n", sizeof(s));
	while(tab[i])
    {
		while(tab[i][j])
		{
			printf("%c", tab[i][j]);
			j++;
		}
		printf("[]");
		j = 0;
		i++;
	}
	//printf("%s\n", tab[i + 1]);
	return (0);
}*/
