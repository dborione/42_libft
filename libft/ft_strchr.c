/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:20:17 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:31 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
		if (i == (ft_strlen(s) + 1))
			return (0);
	}
	return ((char *)&s[i]);
}

/*int	main()
{
	char *str = "dddd";
	int	c = '\0';

	printf("%s", ft_strchr(str, c));
	return (0);
}*/
