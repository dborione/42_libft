/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/20 12:06:11 by dborione         ###   ########.fr       */
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
}*/

/*void	ft_split_string(char const *s, char c)
{
//	char	*new_string;
//	int		i;
//	new_string = ft_substr(s, i, ft_strlen(s));

	//i = ft_strlen(s);	
	if (!ft_strchr(s, c))
		printf("fds");
	s = ft_strchr(s, c);
	printf("%s\n", s);
	ft_split_string(s, c);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

//	size = nbre de strings apres spli_tab
//	tab = malloc(sizeof(*tab) * size);
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
}*/

char	**build_tab(char *s, char c)
{
	char **tab = NULL;
	int	i = 0;
	int	j = 0;

	tab = malloc(sizeof(tab) * ((ft_strlen(s) + 1) * 10));
	if (!tab)
	{
		free(s);
		return (0);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			s = (ft_strchr(s, c) + 1);
			tab[i][j + 1] = *s;
			tab[i][j] = c;
			i++;
			j++;
		}
		i++;
	}
	tab[i] = (void *)0;
	return (*&tab);
}

int	main()
{
	//build_tab(s, c); 
	//ft_split_string(s, c);

	char **tab = build_tab("exemple", 'e');
	int i = 0;
	while(tab[i] != NULL)
	{
		printf("[%s]", tab[i]);
		i++;
	}
	printf("\n");
	printf("[%s]", tab[0]);

	return (0);
}
