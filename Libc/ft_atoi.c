/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 19:17:03 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
/*#include "libft.h"

int	ft_sign(const char *str, int i, char c)
{
	while (str[i] == '-' || str[i] == '+')
	{
		count++;
		if (count > 1)
			return (0);
		i++;
	}
	return (count);
}

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long			res;
	int						neg;

	i = 0;
	res = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	neg = ft_sign(str, i, '-');
	pos = ft_sign(str, i, +);	
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (res > LONG_MAX && count == -1)
		return (-1);
	else if (res > LONG_MAX)
		return (0);
	return (res * count);
}

int	main(void)
{
//	char over_lim[40] = "  +-92233720368547758089";
//	printf("%d\n", atoi(over_lim + 1));
	printf("%d\n", ft_atoi("+5"));
	printf("%d\n", atoi("+5"));
	return (0);
}*/
