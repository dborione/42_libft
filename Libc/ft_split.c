/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 14:06:40 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_tab_len(const char *ptr, char c)
{
	unsigned long	i;
	int				j;
	int				count;
	unsigned int	len;

	i = 0;
	j = 0;
	count = 0;
	len = ft_strlen(ptr);
	while (i < len)
	{
		while (i < len && ptr[i] != c)
		{
			i++;
			if (ptr[i] == c || ptr[i] == '\0')
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

static char	**ft_empty_tab(char **tab, char *ptr)
{
	tab = malloc(sizeof(*tab));
	if (!tab)
	{
		if (ptr)
			free(ptr);
		return (NULL);
	}
	tab[0] = NULL;
	if (ptr)
		free(ptr);
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*ptr;
	int		count;

	if (!s)
		return (NULL);
	count = 0;
	tab = NULL;
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	count = ft_tab_len(s, c);
	if (count == 0)
		return (ft_empty_tab(tab, ptr));
	tab = malloc(sizeof(*tab) * (count + 1));
	if (!tab)
	{
		free(ptr);
		return (NULL);
	}
	tab = ft_fill_tab(tab, s, ptr, c);
	free(ptr);
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
