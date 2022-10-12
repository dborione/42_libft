/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/11 17:24:57 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <limits.h>
#include "libft.h"

unsigned long	ft_over_limits(unsigned long res)
{
	unsigned long	long_max;
	unsigned long	long_min;

	long_max = 9223372036854775807U;
	long_min = -9223372036854775808U;
	if (res > long_max)
		return (-1);
	else if (res < long_min)
		return (0);
	return (res);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long			res;
	int				count;

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
		res = res * 10 + (str[i++] - '0');
	ft_over_limits(res);
	if (count % 2 == 0)
		return (res);
	else
		return (-res);
}

/*int	main(void)
{
	char over_lim[40] = "-99999999999999999999999999";

	printf("%d\n", ft_atoi(over_lim));
	printf("%d\n", atoi(over_lim));

	return (0);
}*/
