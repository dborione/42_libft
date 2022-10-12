/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:29:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/10 16:07:10 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	while (src[i] && (i < (dstsize - dstlen - 1)))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int	main()
{
//	char *src = "lorem";
	char *dst;

	dst[11] = 'a';
//	printf("%lu\n", sizeof(dst));
//	printf("%lu\n", ft_strlen(src));

	printf("%lu\n", strlcat(dst, "loremop", 15));
//	printf("%lu\n", strlcat(dst, src, 15));
//	printf("%s", dst);
//	printf("%lu\n", ft_strlcat(NULL, src, 0));

	return (0);
}*/
