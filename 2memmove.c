/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:22:24 by dborione          #+#    #+#             */
/*   Updated: 2022/10/10 14:21:20 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
//	const char	*src2;
	void	*tmp = NULL;

	i = 0;
	dest2 = (unsigned char *)dest;
//	src2 = (const char *)src;
//	tmp = src2;
	memcpy(tmp, src, n);
	printf("%s", tmp);
/*	while (i < n)
	{	
		dest2[i] = tmp[i];
		i++;
	}*/
//	memcpy(dest2, tmp, n);
	return (dest2);
}

int		main()
{
	char	src1[] = "lorem ipsum dolor sit amet";
/*	char	*dest1;

	dest1 = src1 + 1;

	char	src2[] = "lorem ipsum dolor sit amet";
	char	*dest2;

	dest2 = src2 + 1;*/

	memmove(NULL, NULL, 8);
	//printf("src1=%s\n", src1);
	//printf("dest1=%s\n", dest1);

	ft_memmove(NULL, src1, 8);
	//printf("src2=%s\n", src2);
	//printf("dest2=%s\n", dest2);


	return(0);
}
