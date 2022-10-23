/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/22 13:28:33 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_malloc_tab_size(const char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c)
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

char	**ft_loop(char **tab, char *ptr, const char *s, char c)
{
	int	i;
	int	j;
	int	x;
	int	count = 0;

	i = 0;
	j = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			i++;
			if (s[i] == c)
			{
				count++;	
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

char	**ft_split(const char *s, char c)
{
	char	**tab;
//	char	*ptr;

//	ptr = ft_strdup(s);
	tab = malloc(sizeof(*tab) * ((ft_malloc_tab_size(s, c) + 1)));
	if (!tab)
		return (0);
	tab = ft_loop(tab,ptr, s, c);
	return (tab);
}

/*int	main()
{
	char **tab = ft_split("zehzzfjfdkz", 'z');
	int 	i = 0;
	int	j = 0;


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
      	printf("%s\n", tab[i]);
	return (0);

}*/
