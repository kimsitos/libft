/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:26:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/01 13:24:08 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!big) return (0);
	while (big[i] || i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && (j + i) < len)
			j++;
		if (!small[j]) return ((char *)&big[i]);
		i++;
	}
	return (0);
}
