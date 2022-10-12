/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:34:04 by dborione          #+#    #+#             */
/*   Updated: 2022/10/11 12:24:04 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
//	size_t	i;
	char	*s2;

//	i = 0;
	s2 = NULL;
	s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (0);
	s2 = ft_memcpy(s2, s1, (ft_strlen(s1) + 1));
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
