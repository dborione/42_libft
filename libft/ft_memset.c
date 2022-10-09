//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

/*int		main()
{
	char	str1[]= "exemple";
	char	str2[]= "exemple";

	memset(str1, '&', 2*sizeof(char));
	printf("%s\n", str1);
	ft_memset(str2, '&', 2*sizeof(char));
	printf("%s\n", str2);

	return(0);
}*/
