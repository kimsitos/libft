/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:15:04 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 16:02:31 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(dst);
	y = x;
	while (x < size - 1 && src[x - y])
	{
		dst[x] = src[x - y];
		x++;
	}
	dst[x] = '\0';
	return (y + ft_strlen(src));
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
