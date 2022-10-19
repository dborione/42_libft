/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/19 17:56:29 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
#include <stdio.h>
#include "libft.h"

/*char *ft_tochar(int nbr)
{
	if (nbr >= 0 && nbr < 10)
	{
		str[i] = nbr + '0';
		i++;
	}
	else
	{
		ft_itoa(nbr / 10);
		ft_itoa(nbr % 10);
	}
	return (str);
}


void	*ft_memset2(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;
	
	i = 0;
	b2 = (unsigned char *)b;
	while (i < len)
	{
		b2[i] = c;
		i++;
	}
	b2[i] = '\0';	
	return (b2);
}

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

char *ft_itoa(int nbr)
{
	char	*str;

	str = malloc(sizeof(char) * (sizeof(str) + 1));
	if (!str)
	{
		free(str);
		return (0);
	}
	if (nbr < 0)
	{
		ft_memset2(str, '-', 1);
	//	str = str + 1;
		nbr = -nbr;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_memset2(str + 1, nbr + '0', 1);
	}
	else
	{
		while (i < ft_getdigits(nbr))
		{
			ft_memset(str, nbr / 10, 1);
			ft_itoa(nbr % 10);
	}
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(-2));
	return (0);
}*/
