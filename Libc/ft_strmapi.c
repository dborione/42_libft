/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:31:10 by dborione          #+#    #+#             */
/*   Updated: 2022/10/24 10:41:20 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (0);
	i = 0;
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s) + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s, (ft_strlen(s) + 1));
	while (ptr[i])
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
