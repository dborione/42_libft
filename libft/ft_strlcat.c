/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:29:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 16:42:29 by dborione         ###   ########.fr       */
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
	char src[] = "n\0AA";
	char dst[] = "AAAAAAAAAAAAAAAA";

	printf("%lu\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("%s", dst);
//printf("%lu\n", ft_strlcat(NULL, src, 0));

	return (0);
}*/
