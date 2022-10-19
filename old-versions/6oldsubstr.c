/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 15:52:43 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	char			*s3;
//	char			*s4;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ("");
	s2 = &((char *)s)[start];
	s3 = malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s2, len + 1);
/*	s4 = malloc(sizeof(char) * (ft_strlen(s3) + 1));
	if (!s4)
	{
		free(s3);
		return (0);
	}
	s4 = ft_strdup(s3);*/
	return (s3);
}

/*int	main()
{
	printf("%s\n", ft_substr("", 5, 0));
	return (0);
}*/
