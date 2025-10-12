/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:48:40 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:39:47 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	*tems1;
	int	*tems2;

	tems1 = (int *)s1;
	tems2 = (int *)s2;
	while ((tems1 || tems2) && n)
	{
		if (!(*tems1 == *tems2))
			return (*tems1 - *tems2);
		tems1++;
		tems2++;
		n--;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int arr[] = {1, 2, 4, '\0', 5};
//	int find[] = {1, 2, 4, '\0', 7};
//	size_t size = sizeof(arr);
//
//	int copy = ft_memcmp(arr, find, size);
//	int original = memcmp(arr, find, size);
//
//	printf("COPY = %d\n", copy);
//	printf("ORIGINAL = %d\n", original);
//	return 0;
//}
