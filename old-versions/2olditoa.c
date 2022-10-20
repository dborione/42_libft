/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/20 13:11:55 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
/*#include <stdio.h>
#include "libft.h"

int	ft_getdigits(int nbr)
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

void	ft_fillstr(int i, char *str, char c)
{
	while (i > 0)
	{
		str[i] = c;
		i--;
	}
}


char *ft_itoa_bis(int nbr, int i)
{
	char	*str;
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (0);
	if (nbr < 0)
	{
		*str = '-';
		ft_itoa(-nbr);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		str = str + i;
	   *str	= nbr + '0';
	}
	else
	{
		ft_itoa(nbr / 10);
		ft_itoa(nbr % 10);
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		i;
	i = ft_getdigits(nbr);

	while (i >= 0)
	{
		ft_itoa_bis(nbr, i);
		i--;
	}
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(-2));
	return (0);
}*/
