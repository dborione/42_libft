/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/20 16:48:34 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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

char	*ft_itoa_pos(int nbr)
char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	long	nbr2;

	nbr2 = nbr;
	i = ft_getdigits_nbr(nbr2);
	if (nbr2 < 0)
		i++;
	str = malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	str[0] = '\0';
	while (i > 0)
	{
		if (nbr2 < 0)
		{
			nbr2 = -nbr2;
			str[0] = '-';
		}
		if (str[0] == '-' && i == 1)
		{
			str[i] = nbr2 + '0';
			return (str);
		}
		str[--i] = ((nbr2 % 10) + '0');
		if (nbr2 > 9)
			nbr2 = nbr2 / 10;
	}
	return (str);
}

/*int	main()
{
	printf("%s\n", ft_itoa(42));
	return (0);
}*/
