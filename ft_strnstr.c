/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 08:51:11 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 19:38:40 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!small[0])
		return ((char *)big);
	while (big[i] && i < size)
	{
		j = 0;
		while ((small[j] && big[i + j] == small[j]) && (i + j) < size)
			j++;
		if (!small[j])
			return ((char *)big + i);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	char dest[] = "hello world are you?";
//	const char src[] = "old";
//	printf("%s\n", ft_strnstr(dest, src, 14));
//	return 0;
//}
