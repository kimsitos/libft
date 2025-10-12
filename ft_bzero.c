/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:25:55 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:10:44 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//
//#include <stdio.h>
//#include <string.h>
//#define LEN 7
//int	main(void)
//{
//	int i = 0;
//	char str[LEN] = "hello w";
//	while(i++ < LEN)
//		printf("BEFORE %s\n", str);
//	ft_bzero(str, LEN);
//	i = 0;
//	printf("---------------\n");
//	while(i++ < LEN)
//		printf("AFTER %s\n", str);
//	return 0;
//}
