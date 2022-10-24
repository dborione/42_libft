/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/24 14:44:24 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tab_len(const char *s, char c)
{
	unsigned long	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	if (c == '\0')
		return (1);
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c)
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

char	**ft_fill_tab(char *test, char **tab, char *ptr, const char *s, char c)
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
	tab[x] = test;
	return (tab);
}

int	ft_is_c_in_s(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_count_zero(char *test, char **tab, const char *s, char *ptr, char c, int count)
{
	if (ft_is_c_in_s(s, c) == 1 && count == 0)
	{
		tab = malloc(sizeof(*tab));
		if (!tab)
			return (0);
		tab[0] = test;
	}
	else
	{
		tab = malloc(sizeof(*tab) * 2);
		if (!tab)
			return (0);
		tab[0] = ptr;
		tab[1] = test;
	}
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*ptr;
	int		count;
	char	*test;
	test = malloc(sizeof(*test) + 5);
	if (!test)
		return (0);
	test = "NULL";

	if (!s)
		return (0);
	tab = NULL;
	count = ft_tab_len(s, c);
	ptr = ft_strdup(s);
	if (count == 0)
		tab = ft_count_zero(test, tab, s, ptr, c, count);
	else
	{
		count = count + 1;
		printf("%d\n", count);
		if (c == '\0')
			count = 1;
		tab = malloc(sizeof(*tab) * (count + 1));
		if (!tab)
			return (0);
		tab = ft_fill_tab(test, tab, ptr, s, c);
	}
	return (tab);
}

int	main()
{
	const char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char **tab = ft_split(s, ' ');
	if (!s)
	{
		free(tab);	
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
}
