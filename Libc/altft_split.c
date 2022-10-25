/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 16:53:59 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static void ft_malloc_tab(char **tab, int x)
{
	tab = malloc(sizeof(*tab) * (x + 1));
	if (!tab)
		return (NULL);
}

static char **ft_free_tab(char **tab)
{
	int	x;

	x = 0;
	while (tab[x])
	{
		free(tab[x]);
		x++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill_tab(char **tab, const char *s, char c)
{
	size_t	i;
	int		j;
	int		x;

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
				ft_malloc_tab(tab, x);
				tab[x] = ft_substr(s, j, i - j);
				if (!tab[x])
					return (ft_free_tab(tab));
				x++;
				j = i;
			}
		}
		j++;
		i++;
	}
	if (x == 0)
		ft_malloc_tab(tab, x);
	tab[x] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = NULL;
	tab = ft_fill_tab(tab, s, c);
	return (tab);
}













/*int	main()
{
	const char *s = " Tripouille";
	char **tab = ft_split(s, ' ');
	if (!s)
	{
		//free(tab);	
		return (0);
	}
	if (tab[1] == NULL)
		printf("ok");
	printf("%s\n", tab[0]);
	printf("%zu\n", ft_strlen("Tripouille"));
	printf("%zu\n", ft_strlen(tab[0]));

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
