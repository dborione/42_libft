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
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	j = 0;
	if (dstsize < dstlen)
		return (dstsize + srclen);
	if (dstlen <= srclen && dstlen != 0)
		return (dstlen + srclen);
	while (src[j] && dstlen < (dstsize - 1))
		dst[dstlen++] = src[j++];
	dst[dstlen + j] = '\0';
	return (dstlen + j);
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
