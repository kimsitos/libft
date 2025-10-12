/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:34:45 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 14:29:23 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}

//#include <stdio.h>
//#include <string.h>
//#define LEN 7
//int	main(void)
//{
//	int i = 0;
//	char str[LEN] = "hello w";
//	while(i++ < LEN)
//		printf("ANTES %s\n", str);
//	ft_memset(str, 'i', LEN);
//	i = 0;
//	printf("---------------\n");
//	while(i++ < LEN)
//		printf("DESPUES %s\n", str);
//	return 0;
//}
