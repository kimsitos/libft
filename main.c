#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	c;
	
	c = '3';
	printf("isalpha:    %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("--------------\n");
	printf("isdigit:    %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));
        printf("--------------\n");
        printf("isalnum:    %d\n", isalnum(c));
        printf("ft_isalnum: %d\n", ft_isalnum(c));
        printf("--------------\n");
        printf("isascii:    %d\n", isascii(c));
        printf("ft_isascii: %d\n", ft_isascii(c));
	printf("--------------\n");
        printf("isprint:    %d\n", isprint(c));
        printf("ft_isprint: %d\n", ft_isprint(c));


	return 0;
}
