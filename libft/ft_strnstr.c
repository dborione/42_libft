/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:45 by dborione          #+#    #+#             */
/*   Updated: 2022/10/11 16:20:50 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int			i;
	int			j;
	int			int_len;
	
	i = 0;
	j = 0;
	int_len = (int)len;
	if (!*needle)
		return (haystack);
//	if (haystack == (void *)0)
//		return (0);
	while (haystack[i] && i < int_len)
	{
		while (haystack[i + j] && (haystack[i + j] == needle[j]) && ((i + j) < int_len))
		{
			j++;
			if (needle[i + j] == '\0')
			{
				return (&haystack[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int	main()
{
char haystack[] = "ababac";
	char needle[] = "abac";
//	char haystack2[] = "ababac";
	char needle2[] = "abac";

//	char little[] = "FF";
//	char big[] = "see FF see FF";

//	char little2[] = "FF";
//	char big2[] = "see FF see FF";
//	printf("%s\n", strnstr(big, NULL, 0));
	printf("%s\n", ft_strnstr("fake", NULL, 4));

//	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
//	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
