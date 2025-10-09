/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:49:00 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/09 19:49:11 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_intl(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while ((n % 10) != n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	ft_charnb(int n)
{
	if (n < 0)
	{
		ft_charnb(-n);
		return ('-');
	}

	return (n % 10  + '0');
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_intl(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = ft_charnb(n);
		i++;
	}
	str[i] = 0;
	return (str);
}

int main()
{
	char	*str = ft_itoa(-12345);
	printf("%s\n", str);
	return 0;
}