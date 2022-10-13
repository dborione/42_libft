/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:47:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 11:55:51 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	s2 = NULL;
	i = 0;
	if (start >= ft_strlen(s))
			return (0);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (i != len && start != (len + start))
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main()
{
	char s[] = "01234";
	printf("%s\n", ft_substr(s, 10, 10));
	return (0);
}*/
