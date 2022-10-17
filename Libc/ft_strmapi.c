/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:31:10 by dborione          #+#    #+#             */
/*   Updated: 2022/10/17 11:18:57 by dborione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;

	i = 0;
	s = malloc(sizeof(s) * i);
	if (!s)
	{
		free(s);
		return (0);
	}
	while (s[i])
	{
		s[i] = f(i, s[i]);
		i++;
	}
	s[i] = '\0';
	return (s);
}

char f (unsigned int, char)
{	

}

int	main()
{
	printf("%s\n", ft_strmapi(f(2, 'a'));
	return (0);
}*/
