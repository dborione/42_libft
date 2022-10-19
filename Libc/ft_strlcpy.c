/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:35:58 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 15:55:56 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*int	main()
{
	char src[11] = "an exemple\0";
	char dst[8] = "this is\0";

	printf("%lu\n", ft_strlcpy(dst, src, sizeof(dst));
//	printf("%lu\n", strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", src);
	printf("%s\n", dst);

	return (0);
}*/
