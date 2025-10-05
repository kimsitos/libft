/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   (pendiente)ft_strnstr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:26:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/05 19:38:52 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (big[i] || i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && (j + i) < len)
			j++;
		if (!small[j]) 
			return (big[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main ()
{
	printf("%s\n", ft_strnstr("hello world", "wo", 3));
	return 0;
}
