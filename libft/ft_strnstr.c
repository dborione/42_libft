/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:45 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 13:13:31 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (len != 1)
	{
		while (haystack[i + j] && (haystack[i + j] == needle[j]))
		{
			j++;
			len--;
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
		j = 0;
		i++;
		len--;
	}
	return (0);
}

/*int	main()
{
	char haystack[] = "ababac";
	char needle[] = "abac";
	char haystack2[] = "ababac";
	char needle2[] = "abac";

	printf("strn:%s\n ", strnstr(haystack, needle, 4));
	printf("ft_strn:%s\n ", ft_strnstr(haystack2, needle2, 4));

	return (0);
}*/
