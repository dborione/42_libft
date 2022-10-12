/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:37:21 by dborione          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:28 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	maxlen;

	maxlen = 0;
	while (str[maxlen])
		maxlen++;
	return (maxlen);
}

/*int	main(void)
{
	char	*str = "yolo";
	printf("%zu", ft_strlen(str));
	return (0);
}*/
