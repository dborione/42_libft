/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:33:30 by dborione          #+#    #+#             */
/*   Updated: 2022/10/21 15:33:47 by dborione         ###   ########.fr       */
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
	char	*ptr;
	char	*char_ptr;
	int	i = 0;
	int	x = 0;
	int	s_len;

	s_len = ft_strlen(s);
  	ptr = malloc(sizeof(*ptr) * (s_len));
    if (!ptr)
      return (0);
    char_ptr = malloc(sizeof(*char_ptr));
    if (!char_ptr)
      return (0);
	*char_ptr = c;
    tab = malloc(sizeof(*tab) * 10);
    if (!tab)
        return (0);
    *tab = malloc(sizeof(**tab) * ((s_len + 1)));
    if (!*tab)
        return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = ft_substr(s, i + 1, s_len - (i + 2));
			tab[x] = char_ptr;
			tab[x + 1] = ptr;
			x = x + 2;
			i++;
		}
		i++;
	}
	tab[x] = NULL;
	return (tab);
}

int	main()
{
	//build_tab(s, c); 
	//ft_split_string(s, c);

	char **tab = build_tab("exemple", 'e');
	int i = 0;
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
	//printf("%c", tab[j][i]);
	return (0);

}
