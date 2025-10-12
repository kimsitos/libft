/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:28:31 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:11:08 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//	int i = '9';
//	printf("copy = %d\n", ft_isdigit(i));
//	printf("original = %d\n", isdigit(i));
//	return 0;
//}
