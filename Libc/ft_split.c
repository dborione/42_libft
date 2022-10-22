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

#include <stdio.h>
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

int    ft_find_next_char(char const *s, char c)
{
    int    i;
    int j = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            j++;
            if (s[i + 1] == c)
              return (j);
        }
        i++;
    }
    return(j);
}

char	**ft_split(const char *s, char c)
{
	char	**tab = NULL;
	char	*ptr;
	int		i = 0;
	int		x = 0;
	int		j = 0;
	int		s_len;

	s_len = ft_strlen(s);
	ptr = malloc(sizeof(*ptr) * (s_len));
	if (!ptr)
		return (0);
	ptr = strdup(s);
	tab = malloc(sizeof(*tab) * ft_count_c(s, c));
	if (!tab)
	{
		free(ptr);
		return (0);
	}
	*tab = malloc(sizeof(**tab) * ((s_len + 1)));
	if (!*tab)
	{
		free(ptr);
		free(tab);
		return (0);
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			if (s[i + j] == c)
			{
				ptr = ft_substr(s, i, j);
				tab[x] = ptr;
				x++;
			}
		}
		i++;
	}
	tab[x] = NULL;
	return (tab);
}

int	main()
{
	char **tab = ft_split("exethiseaefjdeppo ", 'e');
	int i = 0;
	int	j = 0;
	//printf("%c", tab[j][i]);

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
	return (0);

}
