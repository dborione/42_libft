/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:20:17 by dborione          #+#    #+#             */
/*   Updated: 2022/10/11 17:26:00 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		i++;
		if (i == (ft_strlen(s) + 1))
			return (0);
	}
	return ((char *)&s[i]);
}

/*int	main()
{
//	char *str = "dddd";
//	int	c = 't';
	char s[] = "tripouille";

	printf("%s", ft_strchr(s, 't'+ 256));
	return (0);
}*/
