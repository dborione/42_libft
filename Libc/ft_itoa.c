/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:12:59 by dborione          #+#    #+#             */
/*   Updated: 2022/10/13 18:01:55 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
#include <stdio.h>
#include "libft.h"

char *ft_tochar(int nbr)
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



char *ft_itoa(int nbr)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	str = malloc(sizeof(char) * (sizeof(str) + 1));
	if (str == NULL)
		return (0);
	if (nbr < 0)
	{
		str[i] = '-';
		nbr = -nbr;
		i++;
	}


}

int	main()
{
	printf("%s\n", ft_itoa(-4));
	return (0);
}
