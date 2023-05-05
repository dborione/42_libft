/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:06 by dborione          #+#    #+#             */
/*   Updated: 2022/10/25 18:45:51 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	long int				res;
	int						count;

	i = 0;
	res = 0;
	count = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
			count = -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (res > LONG_MAX && count == -1)
		return (res);
	if (res > LONG_MAX)
			return (0);
	return (res*count);
}

int	main(void)
{
//	char over_lim[40] = "9223372036854775808999";

	printf("%d\n", ft_atoi("+-5"));
	printf("%d\n", atoi("+-5"));
	return (0);
}
