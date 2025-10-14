/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:23:04 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 20:11:29 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*temsrc;
	char		*temdest;

	temsrc = (char *)src;
	temdest = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		temdest[i] = temsrc[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//#define LEN 5
//
//int main(void)
//{
//	int arr[LEN] = {1, 2, 4, '\0', 5};
//	size_t size = 0;
//	size_t i = 0;
//
//	int *copy = (int *)ft_memmove(arr, arr + 2, size);
//	int *original = (int *)memmove(arr, arr + 2, size);
//
//	while(i < LEN)
//	{
//		printf("COPY =     %d\n", copy[i]);
//		printf("ORIGINAL = %d\n", original[i]);
//		i++;
//	}
//	return 0;
//}
