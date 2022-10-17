/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:47:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 14:43:45 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	s2 = malloc(len + 1);
	if (s2 == NULL)
	{
		free(s2);
		return (0);
	}
//	while (j < (len + start))
//		s2[i++] = s[j++];
	while (s[i])
	{
		if (i >= start && j < len)
		{
			s2[j] = s[i];
			j++;
		}
		i++;
	}
	s2[j] = '\0';
	return (s2);
}

/*int	main()
{
	//printf("%s\n", ft_substr("tripouille", 0, 50));
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *set = " \n\t";
	printf("%s\n", ft_substr(s1, 16, 41-15));
	return (0);
}*/
