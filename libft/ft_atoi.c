/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/10 17:37:12 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	res;
	size_t	count;

	i = 0;
	res = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]))
	{
		if (str[i] == '-')
			count++;
		i++;
	}	
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (count % 2 != 0)
		return (-res);
	else
		return (res);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("INT_MAX"));
	return (0);
}*/
