/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:04 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:11:14 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int i = '^';
//	printf("copy = %d\n", ft_isprint(i));
//	printf("original = %d\n", isprint(i));
//	return 0;
//}
