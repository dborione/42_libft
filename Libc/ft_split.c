/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/26 17:29:04 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_tab_len(const char *ptr, char c)
{
	unsigned long	i;
	unsigned int	len;
	int				count;

	i = 0;
	len = ft_strlen(ptr);
	count = 0;
	while (i < len)
	{
		while (i < len && ptr[i] != c)
		{
			i++;
			if (ptr[i] == c || ptr[i] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

static char	**ft_free_tab(char **tab)
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

static char	**ft_fill_tab(char **tab, const char *s, char c, int x)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
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
	tab[x] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		count;
	int		x;

	x = 0;
	if (!s)
		return (NULL);
	count = 0;
	tab = NULL;
	count = ft_tab_len(s, c);
	tab = malloc(sizeof(*tab) * (count + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill_tab(tab, s, c, x);
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
