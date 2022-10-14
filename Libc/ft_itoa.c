/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/14 13:59:47 by dborione         ###   ########.fr       */
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

//void	ft_fillstr(

char *ft_itoa(int nbr)
{
	void	*str;

	str = NULL;

	str = malloc(sizeof(char) * (sizeof(str) + 1));
	if (str == NULL)
		return (0);
	if (nbr < 0)
	{
		nbr = -nbr;
	//	*str = '-';
		ft_itoa(nbr);
	}
	if (nbr >= 0 && nbr < 10)
	{
		ft_memset(str, nbr, 1);
		str = str + 1;
		return (str);
	}
	else
	{
		ft_itoa(nbr / 10);
		ft_itoa(nbr % 10);
	}
	return (0);
}

int	main()
{
	printf("%s\n", ft_itoa(44));
	return (0);
}*/
