/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:45 by dborione          #+#    #+#             */
/*   Updated: 2022/10/11 15:44:39 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int		i;
	int		j;
	int		int_len;

	i = 0;
	j = 0;
	int_len = (int)len;
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (int_len > 0)
	{
		while (haystack[i + j] && (haystack[i + j] == needle[j]))
		{
			j++;
			int_len--;
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
		j = 0;
		i++;
		int_len--;
	}
	return (0);
}

int	main()
{
//	char haystack[] = "ababac";
//	char needle[] = "abac";
//	char haystack2[] = "ababac";
//	char needle2[] = "abac";
	char haystack[30] = "aaabcabcd";

	printf("strn:%s\n ", strnstr(haystack, ", 9));
	printf("strn:%s\n ", ft_strnstr(haystack, "abcd", 9));

	return (0);
}
