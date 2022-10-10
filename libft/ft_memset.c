/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:12:02 by dborione          #+#    #+#             */
/*   Updated: 2022/10/10 10:25:10 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;

	i = 0;
	b2 = (unsigned char *)b;
	while (i < len)
	{
		b2[i] = c;
		i++;
	}
	return (b2);
}

/*int		main()
{
	char	str1[]= "exemple";
	char	str2[]= "exemple";

	memset(str1, '&', 2*sizeof(char));
	printf("%s\n", str1);
	ft_memset(str2, '&', 2*sizeof(char));
	printf("%s\n", str2);

	return(0);
}*/
