/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:17:34 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 20:11:43 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temdest;
	unsigned const char	*temsrc;

	temdest = (unsigned char *)dest;
	temsrc = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	if (temdest >= temsrc)
	{
		while (n--)
			temdest[n] = temsrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//#define LEN 5
//
//int main(void)
//{
//	int arr[LEN] = {1, 2, 4, '\0', 5};
//	size_t size = 6;
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
