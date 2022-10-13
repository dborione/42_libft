/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:22:10 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 13:32:17 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		buff;

	if (s2 == NULL || s1 == NULL)
		return (0);
	buff = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc (sizeof(char) * buff);
	if (s3 == NULL)
		return (0);
	s3 = ft_memcpy(s3, s1, (ft_strlen(s1) + 1));
	ft_strlcat((char *)s3, (char *)s2, buff);
	return (s3);
	free (s3);
}

/*int	main()
{
	char s1[] = "42";
//	char s2[] = "";

	printf("%s\n", ft_strjoin(NULL, s1));
	return (0);
}*/
