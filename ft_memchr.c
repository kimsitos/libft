/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:36:23 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/14 19:27:28 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		if (*temp == (char)c)
			return ((char *)temp);
		temp++;
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	int arr[] = {10, 20, 30, '\0', 50};
//	int find = 50;
//	size_t size = sizeof(arr);
//
//	int *copy = (int *)ft_memchr(arr, find, size);
//	int *original = (int *)memchr(arr, find, size);
//
//	printf("COPY = %d\n", *copy);
//	printf("ORIGINAL = %d\n", *original);
//	return 0;
//}
