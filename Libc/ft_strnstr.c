/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:45 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 10:38:45 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int			i;
	int			j;
	int			len2;

	i = 0;
	j = 0;
	len2 = (int)len;
	if (len2 < 0)
		len2 = ft_strlen(haystack);
	if (haystack == NULL && len2 == 0)
		return (0);
	if (!*needle)
		return (haystack);
	while (haystack[i] && i < len2)
	{
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len2)
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
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
	char haystack2[] = "ababac";
	char needle2[] = "abac";

//	char little[] = "FF";
//	char big[] = "see FF see FF";

//	char little2[] = "FF";
//	char big2[] = "see FF see FF";
//	printf("%s\n", strnstr(big, NULL, 0));
//	char haystack[30] = "aaabcabcd";
//	char needle[10] = "aabc";
//	char * empty = (char*)"";
	printf("%s\n", strnstr(haystack, needle, -1));

//	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
//	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
