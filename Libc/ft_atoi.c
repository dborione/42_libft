/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/20 18:09:04 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long			res;
	int						count;

	i = 0;
	res = 0;
	count = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while (str[i] >= 0 && str[i] <= 9)
		res = res * 10 + (str[i++] - '0');
	if (res > LONG_MAX && count == -1)
		return (0);
	if (res > LONG_MAX)
		return (-1);
	return (res * count);
}

/*int	main(void)
{
//	char over_lim[40] = "-99999999999999999999999999";

	printf("%d\n", ft_atoi("--88"));
	printf("%d\n", atoi("--88"));

	return (0);
}*/
