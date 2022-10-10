/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:34:04 by dborione          #+#    #+#             */
/*   Updated: 2022/10/10 16:50:37 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char *s2;

	i = 0;
	malloc(sizeof(char)*(sizeof(s1)+1));
	s2 = (char *)s1;
	return (s2);
}

/*int	main()
{
	char src1[11] = "an exemple\0";
	char src2[11] = "an exemple\0";

	printf("%s\n", ft_strdup(src1));
	printf("%s\n", strdup(src2));

	return (0);
}*/
