/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:31:10 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 11:18:57 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*ptr;

	if (!s)
		return (0);
	if (!f)
		return (0);
	i = 0;
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s) + 1));
	if (!ptr)
		return (0);
	//ft_strlcpy(ptr, s, ft_strlen(s));
	ptr = strdup(s);
	while (ptr[i])
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main()
{
	printf("%s\n", ft_strmapi(f(2, 'a'));
	return (0);
}*/
