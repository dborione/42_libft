/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:43:57 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 16:56:12 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	
	char			*s2;
	char			*s3;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ("");
	s2 = malloc(sizeof(char) * (ft_strlen(s) - start));
	if (!s2)
		return (0);
	s2 = &((char *)s)[start];
	s3 = malloc(sizeof(char) * (len));
	if (!s3)
		return (0);

	ft_strlcpy(s3, &s[start], len + 1);
	free(s2);
	return (s3);
}

/*int	main()
{
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 0, 10));
	return (0);
}*/
