/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/20 14:26:53 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
#include <stdio.h>
#include "libft.h"

int	ft_getdigits_nbr(long nbr)
{
	int	i;

	i = 0;
	if (nbr >= -9 && nbr <= 9)
		return (1);
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	long	nbr2;
	char	*str;
	int		i;
	int		j;

	nbr2 = nbr;
	i = ft_getdigits_nbr(nbr2);
	j = 0;
	if (nbr < 0)
	{
		str = malloc(sizeof(char) * (i + 2));
		if (!str)
			return (0);
	}
	else
	{
		str = malloc(sizeof(char) * (i + 1));
		if (!str)
			return (0);
	}
	while (i > 0)
	{
		if (nbr2 < 0)
		{
			str[j] = '-';
			nbr2 = -nbr2;
			j++;
		}
		if (nbr2 >= 0 && nbr2 <= 9)
		{
			str[i] = (nbr2 + '0');
			str[j + 1] = '\0';
			i--;
		}
		else
		{
			str[i] = ((nbr2 % 10) + '0');
			nbr2 = nbr2 / 10;
			i--;
			j++;
		}
	}
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(21474));
	return (0);
}
