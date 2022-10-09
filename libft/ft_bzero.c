//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)s)[i] = '\0';
		i++;
	}
}

/*int		main()
{
	char	str1[]= "exemple";
	char	str2[]= "exemple";

	bzero(str1, 2*sizeof(char));
	printf("%s\n", str1);
	ft_bzero(str2, 2*sizeof(char));
	printf("%s\n", str2);

	return(0);
}*/
