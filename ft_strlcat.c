/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:15:04 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 16:42:19 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	y = 0;
	z = 0;
	while (x < size && dst[x] != '\0')
		x++;
	while (src[y])
		y++;
	if (x == size)
		return (y + size);
	while ((x + z) < (size - 1) && src[z] != '\0')
	{
		dst[x + z] = src[z];
		z++;
	}
	dst[x + z] = '\0';
	return (y + x);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	char dest[] = "hello world";
//	const char src[] = "maybe lol";
//	printf("%zu\n", ft_strlcat(dest, src, 14));
//	printf("%s\n", dest);
//	return 0;
//}
