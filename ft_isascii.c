/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:11:49 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:11:02 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	char i = '+';
//	printf("copy = %d\n", ft_isascii(i));
//	printf("original = %d\n", isascii(i));
//	return 0;
//}
