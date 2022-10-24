/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:27:20 by dborione          #+#    #+#             */
/*   Updated: 2022/10/24 17:50:03 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest2;
	const char	*src2;
	if (!dest && !src && n)
		return (dest);
	i = 0;
	dest2 = (char *)dest;
	src2 = (const char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

/*int		main()
{
	char	src1[]= "exemple hfghfg hfgh";
	char	dest1[20]= "\0";
//	char	str2[]= "exemple";
//	char	dest2[20];

//	memcpy(NULL, NULL, 3);
//	printf("%s\n", dest1);
	ft_memcpy(dest1, src1, sizeof(dest1));
	printf("%s\n", dest1);

	return(0);
}*/
