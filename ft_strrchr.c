/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:40:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 19:18:57 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (*str)
	{
		str++;
		x++;
	}
	if (*str == (char)c)
		return ((char *) str);
	str--;
	while (x != 0)
	{
		if (*str == (char)c)
			return ((char *) str);
		str--;
		x--;
	}
	if (*str == (char)c)
		return ((char *) str);
	return (0);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	const char *src = "hello world are you?";
//	printf("%s\n", ft_strrchr(src, 'o'));
//	return 0;
//}