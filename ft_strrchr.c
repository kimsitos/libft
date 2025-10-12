/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:40:46 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 16:09:50 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return ((char *) str);
		str--;
	}
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