/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:27:20 by dborione          #+#    #+#             */
/*   Updated: 2022/10/26 16:58:11 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	if (!dest && !src)
		return (0);
	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest == src)
		return (dest2);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

/*int		main()
{
	char	*src = "fds";
	char	*dest = src;

	ft_memcpy(dest, src, 11);
	printf("%s\n", dest);

	return(0);
}*/
