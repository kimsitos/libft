/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:14:48 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/12 14:30:28 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
//
//static void	ft_change(unsigned int i, char *c)
//{
//	*c += i;
//}
//int	main(void)
//{
//	char s[] = "hello";
//	printf("ANTES %s\n", s);
//	ft_striteri(s, ft_change);
//	printf("DESPUES %s\n", s);
//	return (0);
//}