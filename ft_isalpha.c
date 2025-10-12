/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:11:14 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:10:56 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int i = 'A';
//	printf("copy = %d\n", ft_isalpha(i));
//	printf("original = %d\n", isalpha(i));
//	return 0;
//}
