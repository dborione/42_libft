/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:37:21 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:28 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((unsigned char *)dest) == (void *)0 
		&& ((unsigned char *)src) == (void *)0 && n != 0)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int		main()
{
//	char	str1[]= "exemple";
//	char	dest1[]= "\0";
//	char	str2[]= "exemple";
//	char	dest2[20];

	memcpy(NULL, NULL, 3);
//	printf("%s\n", dest1);
	ft_memcpy(NULL, NULL, 0);
//	printf("%s\n", str2);

	return(0);
}*/
