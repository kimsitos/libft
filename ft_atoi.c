/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:59:49 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 15:10:30 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *ntpr)
{
	int	nbr;
	int	neg;

	nbr = 0;
	neg = 1;
	while (*ntpr == ' ' || !ft_isprint(*ntpr))
		ntpr++;
	if (*ntpr == '-')
	{
		neg = -neg;
		ntpr++;
	}
	if (*ntpr == '+')
		ntpr++;
	while (ft_isdigit(*ntpr))
	{
		nbr = nbr * 10 + (*ntpr - '0');
		ntpr++;
	}
	return (nbr * neg);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	const char *s = "  -2147483648";
//	
//	printf("copy  = %d\n", ft_atoi(s));
//	printf("original = %d\n", atoi(s));
//	return 0;
//}
