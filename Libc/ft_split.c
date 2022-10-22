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

int	ft_count_c(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**loop(char **tab, char *ptr, const char *s, char c)
{
	int	i;
	int	j;
	int	x;
	
	i = 0;
	j = 0;
	x = 0;
	while (s[j])
	{
		while (s[i] == c)
		{
			j++;
			i++;
		}
		if (s[j] == c)
		{
			ptr = ft_substr(s, i, j - i);
			tab[x] = ptr;
			x++;
			i++;
		}
		j++;
	}
	tab[x] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*ptr;

	ptr = ft_strdup(s);
	tab = malloc(sizeof(*tab) * ft_count_c(s, c) + 1);
	if (!tab)
	{
		free((void *)s);
		return (0);
	}
	tab = loop(tab, ptr, s, c);
	return (tab);
}

/*int	main()
{
	char **tab = ft_split("xEmplE", 'E');
	int 	i = 0;
	int	j = 0;


    	while(tab[i])
    	{
      		while(tab[i][j])
      		{
        	printf("%c", tab[i][j]);
        	j++;
      		}
      		printf("/");
      		j = 0;
      		i++;
    	}
      	//printf("0");
	return (0);

}*/
